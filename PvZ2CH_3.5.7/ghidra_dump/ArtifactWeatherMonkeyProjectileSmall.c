// Class: ArtifactWeatherMonkeyProjectileSmall


/* ArtifactWeatherMonkeyProjectileSmall::onBezierDone(BoardEntity*) */

void ArtifactWeatherMonkeyProjectileSmall::onBezierDone(BoardEntity *param_1)

{
  param_1[0x1bc] = (BoardEntity)0x0;
  return;
}


/* ArtifactWeatherMonkeyProjectileSmall::onProjectileInitialized() */

void __thiscall
ArtifactWeatherMonkeyProjectileSmall::onProjectileInitialized
          (ArtifactWeatherMonkeyProjectileSmall *this)

{
  *(undefined4 *)(this + 0x1d8) = 0;
  FUN_03723af0(0,this + 0xc4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactWeatherMonkeyProjectileSmall::StaticClassInit() */

void ArtifactWeatherMonkeyProjectileSmall::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactWeatherMonkeyProjectileSmall");
    (*pcVar2)(plVar1,asStack_10,FUN_037652c0,0x1e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactWeatherMonkeyProjectileSmall::StaticGetClass() */

long * ArtifactWeatherMonkeyProjectileSmall::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactWeatherMonkeyProjectileSmall",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactWeatherMonkeyProjectileSmall::GetClass() const */

long * ArtifactWeatherMonkeyProjectileSmall::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactWeatherMonkeyProjectileSmall",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactWeatherMonkeyProjectileSmall::ArtifactWeatherMonkeyProjectileSmall() */

void __thiscall
ArtifactWeatherMonkeyProjectileSmall::ArtifactWeatherMonkeyProjectileSmall
          (ArtifactWeatherMonkeyProjectileSmall *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06690910;
  *(undefined ***)(this + 0x10) = &PTR__ArtifactWeatherMonkeyProjectileSmall_06690b00;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a8));
  this[0x1b0] = (ArtifactWeatherMonkeyProjectileSmall)0x0;
  this[0x1bc] = (ArtifactWeatherMonkeyProjectileSmall)0x0;
  *(undefined4 *)(this + 0x1c0) = 0;
  *(undefined4 *)(this + 0x1b4) = 0;
  *(undefined4 *)(this + 0x1b8) = 0;
  DVec3::DVec3((DVec3 *)(this + 0x1c4));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x1d0));
  return;
}


/* ArtifactWeatherMonkeyProjectileSmall::StaticNew() */

ArtifactWeatherMonkeyProjectileSmall * ArtifactWeatherMonkeyProjectileSmall::StaticNew(void)

{
  ArtifactWeatherMonkeyProjectileSmall *this;
  
  this = ::operator_new(0x1e0);
  ArtifactWeatherMonkeyProjectileSmall(this);
  return this;
}


/* ArtifactWeatherMonkeyProjectileSmall::~ArtifactWeatherMonkeyProjectileSmall() */

void __thiscall
ArtifactWeatherMonkeyProjectileSmall::~ArtifactWeatherMonkeyProjectileSmall
          (ArtifactWeatherMonkeyProjectileSmall *this)

{
  *(undefined ***)this = &PTR_GetClass_06690910;
  *(undefined ***)(this + 0x10) = &PTR__ArtifactWeatherMonkeyProjectileSmall_06690b00;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to
   ArtifactWeatherMonkeyProjectileSmall::~ArtifactWeatherMonkeyProjectileSmall() */

void __thiscall
ArtifactWeatherMonkeyProjectileSmall::~ArtifactWeatherMonkeyProjectileSmall
          (ArtifactWeatherMonkeyProjectileSmall *this)

{
  ~ArtifactWeatherMonkeyProjectileSmall(this + -0x10);
  return;
}


/* ArtifactWeatherMonkeyProjectileSmall::~ArtifactWeatherMonkeyProjectileSmall() */

void __thiscall
ArtifactWeatherMonkeyProjectileSmall::~ArtifactWeatherMonkeyProjectileSmall
          (ArtifactWeatherMonkeyProjectileSmall *this)

{
  ~ArtifactWeatherMonkeyProjectileSmall(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   ArtifactWeatherMonkeyProjectileSmall::~ArtifactWeatherMonkeyProjectileSmall() */

void __thiscall
ArtifactWeatherMonkeyProjectileSmall::~ArtifactWeatherMonkeyProjectileSmall
          (ArtifactWeatherMonkeyProjectileSmall *this)

{
  ~ArtifactWeatherMonkeyProjectileSmall(this + -0x10);
  return;
}


/* ArtifactWeatherMonkeyProjectileSmall::CanBeTarget(BoardEntity*) */

byte ArtifactWeatherMonkeyProjectileSmall::CanBeTarget(BoardEntity *param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  undefined4 uVar4;
  Zombie *this;
  
  if ((((param_1 != (BoardEntity *)0x0) && (cVar1 = RealObject::IsOnTeam(param_1,1), cVar1 == '\0'))
      && (bVar2 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1), bVar2)) &&
     (nop(), this != (Zombie *)0x0)) {
    uVar4 = operator|(7,2);
    cVar1 = Zombie::IsTargetable(this);
    if ((cVar1 != '\0') && (cVar1 = (**(code **)(*(long *)this + 0xb8))(this,uVar4), cVar1 != '\0'))
    {
      bVar3 = (**(code **)(*(long *)this + 0x328))(this);
      return bVar3 ^ 1;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactWeatherMonkeyProjectileSmall::GetTargetPos(BoardEntity*) */

void __thiscall
ArtifactWeatherMonkeyProjectileSmall::GetTargetPos
          (ArtifactWeatherMonkeyProjectileSmall *this,BoardEntity *param_1)

{
  bool bVar1;
  SexyVector3 *this_00;
  RtObject *this_01;
  long lVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  Vec3 aVStack_28 [16];
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec3::DVec3((DVec3 *)&local_38);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1a8));
  if (bVar1) {
    this_01 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
    bVar1 = Sexy::RtObject::IsA<ZombieZombossMech_Eighties>(this_01);
    if (bVar1) {
      local_38 = FUN_0373bf4c(param_1);
      lVar2 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this);
      uStack_34 = *(undefined4 *)(lVar2 + 4);
      local_30 = 0;
      goto LAB_0373fd3c;
    }
  }
  this_00 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)param_1);
  fVar3 = (float)FUN_03728ac0(0xc1700000);
  uVar5 = 0;
  EATextSquish::Vec3::Vec3(aVStack_28,0.0,fVar3,0.0);
  uVar4 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)aVStack_28);
  local_18 = CONCAT44(fVar3,uVar4);
  local_10 = uVar5;
  Sexy::SexyVector3::operator=((SexyVector3 *)&local_38,(SexyVector3 *)&local_18);
LAB_0373fd3c:
  local_18 = CONCAT44(uStack_34,local_38);
  local_10 = local_30;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_38,uStack_34,local_30);
}


/* ArtifactWeatherMonkeyProjectileSmall::OnCollideEntity(BoardEntity*) */

undefined8 __thiscall
ArtifactWeatherMonkeyProjectileSmall::OnCollideEntity
          (ArtifactWeatherMonkeyProjectileSmall *this,BoardEntity *param_1)

{
  RtWeakPtr *this_00;
  char cVar1;
  bool bVar2;
  long extraout_x0;
  undefined8 uVar3;
  ResourceInfo *pRVar4;
  RtObject *this_01;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (this[0x1b0] == (ArtifactWeatherMonkeyProjectileSmall)0x0) {
    cVar1 = CanBeTarget(param_1);
    if (cVar1 == '\0') {
      return 0;
    }
    this_00 = (RtWeakPtr *)(this + 0x1a8);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if ((bVar2) &&
       (pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00),
       param_1 != (BoardEntity *)pRVar4)) {
      this_01 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      bVar2 = Sexy::RtObject::IsA<ZombieZombossMech_Eighties>(this_01);
      if (!bVar2) {
        return 0;
      }
    }
    if ((param_1 != (BoardEntity *)0x0) &&
       (bVar2 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1), bVar2)) {
      nop();
      fVar7 = *(float *)(this + 0x1d8);
      if (fVar7 != 0.0) {
        fVar5 = (float)FUN_03723b88(*(undefined4 *)(extraout_x0 + 0x280));
        fVar6 = (float)FUN_03723b9c(*(undefined4 *)(extraout_x0 + 0x2a8));
        FUN_03723b18((fVar6 + fVar5) * fVar7,this + 0xd8);
      }
    }
  }
  uVar3 = Projectile::OnCollideEntity((Projectile *)this,param_1);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactWeatherMonkeyProjectileSmall::FindTargetWithFlag(BoardEntityTypeFlag) */

void __thiscall
ArtifactWeatherMonkeyProjectileSmall::FindTargetWithFlag(undefined8 param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  BoardEntity *pBVar6;
  BoardEntity *pBVar7;
  float fVar8;
  float fVar9;
  undefined8 local_40;
  undefined8 local_38;
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  pBVar7 = (BoardEntity *)0x0;
  local_8 = ___stack_chk_guard;
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar4 = BoardConstants::NUMBER_OF_ROWS();
  Sexy::Insets::Insets(aIStack_30,0,0,iVar3,iVar4);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,param_2,aIStack_30);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  fVar9 = 1e+06;
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    pBVar6 = (BoardEntity *)*puVar5;
    cVar2 = CanBeTarget(pBVar6);
    if ((cVar2 != '\0') &&
       (fVar8 = (float)FUN_03726f28(*(undefined4 *)(pBVar6 + 0x18),*(undefined4 *)(pBVar6 + 0x1c),
                                    *(undefined4 *)(pBVar6 + 0x20)), fVar8 < fVar9)) {
      pBVar7 = pBVar6;
      fVar9 = fVar8;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pBVar7);
}


/* ArtifactWeatherMonkeyProjectileSmall::FindNewTarget() */

void __thiscall
ArtifactWeatherMonkeyProjectileSmall::FindNewTarget(ArtifactWeatherMonkeyProjectileSmall *this)

{
  BoardEntity *pBVar1;
  
  pBVar1 = (BoardEntity *)FindTargetWithFlag(this,2);
  if (pBVar1 != (BoardEntity *)0x0) {
    PineconePlantfoodProjectile::SetOverrideTarget((PineconePlantfoodProjectile *)this,pBVar1);
    return;
  }
  pBVar1 = (BoardEntity *)FindTargetWithFlag(this,4);
  PineconePlantfoodProjectile::SetOverrideTarget((PineconePlantfoodProjectile *)this,pBVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactWeatherMonkeyProjectileSmall::moveThroughTime(float) */

void ArtifactWeatherMonkeyProjectileSmall::moveThroughTime(float param_1)

{
  RtWeakPtr *this;
  char cVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  float *pfVar2;
  ResourceInfo *pRVar3;
  SexyVector3 *pSVar4;
  DVec3 *this_00;
  long extraout_x0;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  double dVar8;
  undefined8 in_d1;
  undefined8 in_d2;
  double dVar9;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (in_x0[0x1bc] ==
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       )0x0) {
    if (in_x0[0x1b0] ==
        (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
         )0x0) {
      this = (RtWeakPtr *)(in_x0 + 0x1a8);
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
      cVar1 = CanBeTarget((BoardEntity *)pRVar3);
      if (cVar1 == '\0') {
        FindNewTarget((ArtifactWeatherMonkeyProjectileSmall *)in_x0);
      }
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
      if (pRVar3 != (ResourceInfo *)0x0) {
        pSVar4 = (SexyVector3 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(in_x0);
        this_00 = (DVec3 *)Projectile::GetVelocity((Projectile *)in_x0);
        pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
        local_28 = (float)GetTargetPos((ArtifactWeatherMonkeyProjectileSmall *)in_x0,
                                       (BoardEntity *)pRVar3);
        local_24 = (undefined4)in_d1;
        local_20 = (undefined4)in_d2;
        local_18 = (float)Sexy::SexyVector3::operator-((SexyVector3 *)&local_28,pSVar4);
        local_14 = (undefined4)in_d1;
        local_10 = (undefined4)in_d2;
        uVar6 = Sexy::SexyVector3::Normalize((SexyVector3 *)&local_18);
        fVar5 = (float)FUN_03723aec(*(undefined4 *)(in_x0 + 0xc4));
        fVar7 = (float)ArmorflameMissile::calcDesiredRot(uVar6,in_d1,in_d2,fVar5);
        Projectile::GetProps((Projectile *)in_x0);
        nop();
        local_28 = ABS(fVar7 - fVar5);
        local_18 = *(float *)(extraout_x0 + 0x1e0) * 6.2831855 * param_1;
        pfVar2 = eastl::min_alt<float>(&local_28,&local_18);
        if ((long)(double)(fVar7 - fVar5) < 0) {
          dVar9 = (double)fVar5 + -ABS((double)*pfVar2);
        }
        else {
          dVar9 = (double)fVar5 + ABS((double)*pfVar2);
        }
        if (3.1415927410125732 < ABS(dVar9)) {
          dVar8 = 6.2831854820251465;
          if ((long)dVar9 < 0) {
            dVar8 = -6.2831854820251465;
          }
          dVar9 = dVar9 - dVar8;
        }
        FUN_03723af0((float)dVar9,in_x0 + 0xc4);
        fVar5 = (float)DVec3::getLength(this_00);
        Projectile::SetRotatedVelocity((Projectile *)in_x0,fVar5);
        Projectile::moveThroughTime((Projectile *)in_x0,param_1);
        goto LAB_03757bc0;
      }
    }
    Projectile::moveThroughTime((Projectile *)in_x0,param_1);
  }
  else {
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(in_x0);
    fVar5 = ((*pfVar2 - *(float *)(in_x0 + 0x1d0)) /
            (*(float *)(in_x0 + 0x1d0) - *(float *)(in_x0 + 0x1c4))) * 1.5707964;
    if (*(float *)(in_x0 + 0x1d4) < 460.0) {
      fVar5 = -fVar5;
    }
    FUN_03723af0(fVar5,in_x0 + 0xc4);
  }
LAB_03757bc0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactWeatherMonkeyProjectileSmall::start() */

void __thiscall
ArtifactWeatherMonkeyProjectileSmall::start(ArtifactWeatherMonkeyProjectileSmall *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  SexyVector3 *pSVar4;
  ActionSubSystem *pAVar5;
  float fVar6;
  float fVar7;
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
  _ccBezierConfig::_ccBezierConfig((_ccBezierConfig *)&local_68);
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar2 = BoardConstants::NUMBER_OF_ROWS();
  iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
  fVar6 = (float)Sexy::Rand((float)iVar1);
  fVar7 = (float)Sexy::Rand((float)(iVar2 * iVar3));
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,fVar6 + 200.0,fVar7 + 160.0);
  *(undefined8 *)(this + 0x1d0) = local_70;
  local_68 = local_70;
  pSVar4 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,*(float *)pSVar4,local_68._4_4_);
  local_58 = local_70;
  local_60 = local_70;
  pAVar5 = Board::GetGameSubSystem<ActionSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_70,(RtWeakPtrBase *)aRStack_90);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_88);
  std::string::string(asStack_78,"onBezierDone");
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)aRStack_50,aRStack_80,asStack_78)
  ;
  ActionSubSystem::AddActionBezierTo
            ((ActionSubSystem *)0x3f000000,pAVar5,(FastCurve *)&local_70,
             (_ccBezierConfig *)&local_68,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_78);
  nop();
  Sexy::RtId::~RtId(aRStack_80);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
  this[0x1bc] = (ArtifactWeatherMonkeyProjectileSmall)0x1;
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x1c4),pSVar4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

