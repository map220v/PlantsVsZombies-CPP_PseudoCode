// Class: PineconePlantfoodProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PineconePlantfoodProjectile::SetOverrideTarget(BoardEntity*) */

void __thiscall
PineconePlantfoodProjectile::SetOverrideTarget
          (PineconePlantfoodProjectile *this,BoardEntity *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (BoardEntity *)0x0) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1a8),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  else {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x1a8),(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PineconePlantfoodProjectile::SetKeepDown(float) */

void __thiscall
PineconePlantfoodProjectile::SetKeepDown(PineconePlantfoodProjectile *this,float param_1)

{
  *(float *)(this + 0x1b0) = param_1;
  return;
}


/* PineconePlantfoodProjectile::SetTargetLocked(bool) */

void __thiscall
PineconePlantfoodProjectile::SetTargetLocked(PineconePlantfoodProjectile *this,bool param_1)

{
  this[0x1b6] = (PineconePlantfoodProjectile)param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PineconePlantfoodProjectile::TestOutWithoutTarget() */

void __thiscall PineconePlantfoodProjectile::TestOutWithoutTarget(PineconePlantfoodProjectile *this)

{
  bool bVar1;
  ResourceInfo *pRVar2;
  BoardTransforms *this_00;
  float local_28;
  float local_24;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x1b4] == (PineconePlantfoodProjectile)0x0) ||
     (pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x1a8)),
     pRVar2 != (ResourceInfo *)0x0)) {
    bVar1 = false;
  }
  else {
    (**(code **)(*(long *)this + 0xb0))(&local_18,this);
    this_00 = (BoardTransforms *)
              Sexy::FastCurve::SetOutRange
                        ((FastCurve *)&local_28,(float)(local_18 + local_10 / 2),
                         (float)(local_14 + local_c / 2));
    BoardTransforms::BoardSpaceToGrid(this_00,local_28,local_24);
    bVar1 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) + -1 <= local_1c;
    if (bVar1) {
      (**(code **)(*(long *)this + 0x118))(this);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PineconePlantfoodProjectile::CanBeTarget(BoardEntity*) */

void __thiscall
PineconePlantfoodProjectile::CanBeTarget(PineconePlantfoodProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  long *extraout_x0;
  GridItem *pGVar4;
  string *psVar5;
  code *pcVar6;
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (BoardEntity *)0x0) {
    bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
    if (bVar1) {
      nop();
      if (extraout_x0 != (long *)0x0) {
        cVar2 = (**(code **)(*extraout_x0 + 0x328))();
        if (cVar2 == '\0') {
          pcVar6 = *(code **)(*extraout_x0 + 0x3d0);
          psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
          std::string::string(asStack_20,"cobcannon");
          ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
          cVar2 = (*pcVar6)(extraout_x0,aRStack_10,0);
          bVar3 = 0;
          if ((cVar2 != '\0') && (cVar2 = Zombie::HasCondition(extraout_x0,0x27), cVar2 == '\0')) {
            bVar3 = Zombie::HasCondition(extraout_x0,0x25);
            bVar3 = bVar3 ^ 1;
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
          std::string::~string(asStack_20);
          nop();
          goto LAB_0414cf7c;
        }
      }
    }
    else {
      bVar1 = Sexy::RtObject::IsA<GridItem>((RtObject *)param_1);
      if ((bVar1) &&
         (pGVar4 = Sexy::RtObject::Cast<GridItem>((RtObject *)param_1), pGVar4 != (GridItem *)0x0))
      {
        bVar3 = (**(code **)(*(long *)pGVar4 + 0x200))();
        goto LAB_0414cf7c;
      }
    }
  }
  bVar3 = 0;
LAB_0414cf7c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* PineconePlantfoodProjectile::OnCollideEntity(BoardEntity*) */

undefined8 __thiscall
PineconePlantfoodProjectile::OnCollideEntity(PineconePlantfoodProjectile *this,BoardEntity *param_1)

{
  RtWeakPtr *this_00;
  char cVar1;
  bool bVar2;
  ResourceInfo *pRVar3;
  undefined8 uVar4;
  RtObject *this_01;
  
  if (this[0x1b5] == (PineconePlantfoodProjectile)0x0) {
    cVar1 = CanBeTarget(this,param_1);
    if (cVar1 == '\0') {
      return 0;
    }
    this_00 = (RtWeakPtr *)(this + 0x1a8);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    if ((param_1 != (BoardEntity *)pRVar3) &&
       (bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00), bVar2)) {
      this_01 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      bVar2 = Sexy::RtObject::IsA<ZombieZombossMech_Eighties>(this_01);
      if (!bVar2) {
        return 0;
      }
    }
  }
  uVar4 = Projectile::OnCollideEntity((Projectile *)this,param_1);
  return uVar4;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PineconePlantfoodProjectile::getCollisionEntities(std::vector<BoardEntity*,
   std::allocator<BoardEntity*> >&, Sexy::TRect<int> const&) const */

void __thiscall
PineconePlantfoodProjectile::getCollisionEntities
          (PineconePlantfoodProjectile *this,vector *param_1,TRect *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1b4] == (PineconePlantfoodProjectile)0x0) {
    Projectile::getCollisionEntities((Projectile *)this,param_1,param_2);
  }
  else if (this[0x1b6] != (PineconePlantfoodProjectile)0x0) {
    uVar2 = BoardConstants::NUMBER_OF_ROWS();
    local_c = 0;
    cVar1 = (**(code **)(*(long *)this + 0xb8))(this,8);
    if (cVar1 != '\0') {
      operator|=(&local_c,4);
    }
    cVar1 = (**(code **)(*(long *)this + 0xb8))(this,7);
    if (cVar1 != '\0') {
      operator|=(&local_c,2);
    }
    cVar1 = (**(code **)(*(long *)this + 0xb8))(this,0xf0);
    if (cVar1 != '\0') {
      operator|=(&local_c,1);
    }
    EntityFinder::GetEntitiesTouchingRectangle(param_1,local_c,param_2,0,uVar2);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)param_1);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)param_1);
    std::
    sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,bool(*)(BoardEntity*,BoardEntity*)>
              (uVar3,uVar4,BoardEntity::BoardEntityLeftToRightSortFunc);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PineconePlantfoodProjectile::onFlyToTargetDone(BoardEntity*) */

void PineconePlantfoodProjectile::onFlyToTargetDone(BoardEntity *param_1)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PineconePlantfoodProjectile::StaticClassInit() */

void PineconePlantfoodProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"PineconePlantfoodProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04283b24,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PineconePlantfoodProjectile::StaticGetClass() */

long * PineconePlantfoodProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PineconePlantfoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PineconePlantfoodProjectile::GetClass() const */

long * PineconePlantfoodProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"PineconePlantfoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PineconePlantfoodProjectile::SetRotatedVelocity(float) */

void __thiscall
PineconePlantfoodProjectile::SetRotatedVelocity(PineconePlantfoodProjectile *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_0427fd84(*(undefined4 *)(this + 0xc4));
  fVar2 = cosf(fVar1);
  fVar1 = sinf(fVar1);
  Projectile::SetVelocity((Projectile *)this,fVar2 * param_1,-(fVar1 * param_1),0.0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PineconePlantfoodProjectile::PineconePlantfoodProjectile() */

void __thiscall
PineconePlantfoodProjectile::PineconePlantfoodProjectile(PineconePlantfoodProjectile *this)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06824f60;
  *(undefined ***)(this + 0x10) = &PTR__PineconePlantfoodProjectile_06825150;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a8));
  this[0x1b4] = (PineconePlantfoodProjectile)0x0;
  this[0x1b5] = (PineconePlantfoodProjectile)0x0;
  this[0x1b6] = (PineconePlantfoodProjectile)0x0;
  *(undefined4 *)(this + 0x1b0) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1a8),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  this[0x1b5] = (PineconePlantfoodProjectile)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PineconePlantfoodProjectile::StaticNew() */

PineconePlantfoodProjectile * PineconePlantfoodProjectile::StaticNew(void)

{
  PineconePlantfoodProjectile *this;
  
  this = ::operator_new(0x1b8);
  PineconePlantfoodProjectile(this);
  return this;
}


/* PineconePlantfoodProjectile::~PineconePlantfoodProjectile() */

void __thiscall
PineconePlantfoodProjectile::~PineconePlantfoodProjectile(PineconePlantfoodProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06824f60;
  *(undefined ***)(this + 0x10) = &PTR__PineconePlantfoodProjectile_06825150;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to PineconePlantfoodProjectile::~PineconePlantfoodProjectile() */

void __thiscall
PineconePlantfoodProjectile::~PineconePlantfoodProjectile(PineconePlantfoodProjectile *this)

{
  ~PineconePlantfoodProjectile(this + -0x10);
  return;
}


/* PineconePlantfoodProjectile::~PineconePlantfoodProjectile() */

void __thiscall
PineconePlantfoodProjectile::~PineconePlantfoodProjectile(PineconePlantfoodProjectile *this)

{
  ~PineconePlantfoodProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PineconePlantfoodProjectile::~PineconePlantfoodProjectile() */

void __thiscall
PineconePlantfoodProjectile::~PineconePlantfoodProjectile(PineconePlantfoodProjectile *this)

{
  ~PineconePlantfoodProjectile(this + -0x10);
  return;
}


/* PineconePlantfoodProjectile::onDeflection(BoardEntity*) */

void PineconePlantfoodProjectile::onDeflection(BoardEntity *param_1)

{
  FUN_0427fd88(0,param_1 + 0xc4);
  SetOverrideTarget((PineconePlantfoodProjectile *)param_1,(BoardEntity *)0x0);
  param_1[0x1b5] = (BoardEntity)0x1;
  return;
}


/* PineconePlantfoodProjectile::getBoardEntityPriority(BoardEntity*) */

undefined4 __thiscall
PineconePlantfoodProjectile::getBoardEntityPriority
          (PineconePlantfoodProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  Zombie *this_00;
  
  if (param_1 == (BoardEntity *)0x0) {
    return 0;
  }
  bVar1 = Sexy::RtObject::IsA<GridItem>((RtObject *)param_1);
  uVar4 = 0;
  if (!bVar1) {
    bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
    if (!bVar1) {
      return 0;
    }
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    if ((this_00 != (Zombie *)0x0) && (cVar2 = Zombie::IsBoss(this_00), cVar2 != '\0')) {
      return 4;
    }
    iVar3 = Zombie::GetSizeType(this_00);
    uVar4 = 3;
    if (iVar3 != 2) {
      iVar3 = Zombie::GetSizeType(this_00);
      uVar4 = 2;
      if (iVar3 != 1) {
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}


/* PineconePlantfoodProjectile::compareSamePriority(BoardEntity*, BoardEntity*) */

bool __thiscall
PineconePlantfoodProjectile::compareSamePriority
          (PineconePlantfoodProjectile *this,BoardEntity *param_1,BoardEntity *param_2)

{
  bool bVar1;
  Zombie *pZVar2;
  Zombie *pZVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (param_2 == (BoardEntity *)0x0) {
    return true;
  }
  if (param_1 == (BoardEntity *)0x0) {
    return false;
  }
  bVar1 = Sexy::RtObject::IsA<GridItem>((RtObject *)param_1);
  if (bVar1) {
    fVar4 = (float)FUN_0427fdfc(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                                *(undefined4 *)(param_1 + 0x20));
    uVar7 = *(undefined4 *)(param_2 + 0x1c);
    uVar8 = *(undefined4 *)(param_2 + 0x20);
    uVar6 = *(undefined4 *)(param_2 + 0x18);
  }
  else {
    bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
    if (!bVar1) {
      return false;
    }
    pZVar2 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    pZVar3 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_2);
    fVar4 = (float)FUN_0427fdc0(*(undefined4 *)(pZVar2 + 0x280));
    fVar5 = (float)FUN_0427fdc0(*(undefined4 *)(pZVar3 + 0x280));
    if ((int)fVar4 != (int)fVar5) {
      return fVar5 < fVar4;
    }
    fVar4 = (float)FUN_0427fdfc(*(undefined4 *)(pZVar2 + 0x18),*(undefined4 *)(pZVar2 + 0x1c),
                                *(undefined4 *)(pZVar2 + 0x20));
    uVar7 = *(undefined4 *)(pZVar3 + 0x1c);
    uVar6 = *(undefined4 *)(pZVar3 + 0x18);
    uVar8 = *(undefined4 *)(pZVar3 + 0x20);
  }
  fVar5 = (float)FUN_0427fdfc(uVar6,uVar7,uVar8);
  return fVar5 < fVar4;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PineconePlantfoodProjectile::GetTargetPos(BoardEntity*) */

void __thiscall
PineconePlantfoodProjectile::GetTargetPos(PineconePlantfoodProjectile *this,BoardEntity *param_1)

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
      local_38 = CollsionTargetCenterRg(param_1);
      lVar2 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this);
      uStack_34 = *(undefined4 *)(lVar2 + 4);
      local_30 = 0;
      goto LAB_04281770;
    }
  }
  this_00 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)param_1);
  fVar3 = (float)FUN_0427ffa8(0xc1700000);
  uVar5 = 0;
  EATextSquish::Vec3::Vec3(aVStack_28,0.0,fVar3,0.0);
  uVar4 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)aVStack_28);
  local_18 = CONCAT44(fVar3,uVar4);
  local_10 = uVar5;
  Sexy::SexyVector3::operator=((SexyVector3 *)&local_38,(SexyVector3 *)&local_18);
LAB_04281770:
  local_18 = CONCAT44(uStack_34,local_38);
  local_10 = local_30;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_38,uStack_34,local_30);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PineconePlantfoodProjectile::FindTargetWithFlag(BoardEntityTypeFlag) */

void __thiscall
PineconePlantfoodProjectile::FindTargetWithFlag
          (PineconePlantfoodProjectile *this,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  BoardEntity *pBVar6;
  int iVar7;
  BoardEntity *pBVar8;
  BoardEntity *pBVar9;
  undefined8 local_40;
  undefined8 local_38;
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar7 = 0;
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
  pBVar9 = (BoardEntity *)0x0;
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    pBVar6 = (BoardEntity *)*puVar5;
    cVar2 = CanBeTarget(this,pBVar6);
    pBVar8 = pBVar9;
    iVar3 = iVar7;
    if ((((cVar2 != '\0') &&
         (iVar4 = getBoardEntityPriority(this,pBVar6), pBVar8 = pBVar6, iVar3 = iVar4,
         iVar4 <= iVar7)) && (pBVar8 = pBVar9, iVar3 = iVar7, iVar4 == iVar7)) &&
       (cVar2 = compareSamePriority(this,pBVar6,pBVar9), cVar2 != '\0')) {
      pBVar8 = pBVar6;
    }
    iVar7 = iVar3;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    pBVar9 = pBVar8;
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pBVar9);
  }
  return;
}


/* PineconePlantfoodProjectile::FindNewTarget() */

BoardEntity * __thiscall
PineconePlantfoodProjectile::FindNewTarget(PineconePlantfoodProjectile *this)

{
  BoardEntity *pBVar1;
  
  pBVar1 = (BoardEntity *)FindTargetWithFlag(this,2);
  if (pBVar1 != (BoardEntity *)0x0) {
    SetOverrideTarget(this,pBVar1);
    return pBVar1;
  }
  pBVar1 = (BoardEntity *)FindTargetWithFlag(this,4);
  SetOverrideTarget(this,pBVar1);
  return pBVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PineconePlantfoodProjectile::moveThroughTime(float) */

void PineconePlantfoodProjectile::moveThroughTime(float param_1)

{
  RtWeakPtr *this;
  char cVar1;
  PineconePlantfoodProjectile *in_x0;
  ResourceInfo *pRVar2;
  SexyVector3 *pSVar3;
  long extraout_x0;
  float *pfVar4;
  DVec3 *this_00;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  undefined8 in_d1;
  undefined8 in_d2;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (in_x0[0x1b6] == (PineconePlantfoodProjectile)0x0) goto LAB_04285e94;
  if (in_x0[0x1b5] == (PineconePlantfoodProjectile)0x0) {
    this = (RtWeakPtr *)(in_x0 + 0x1a8);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
    cVar1 = CanBeTarget(in_x0,(BoardEntity *)pRVar2);
    if (cVar1 == '\0') {
      FindNewTarget(in_x0);
    }
    cVar1 = TestOutWithoutTarget(in_x0);
    if (cVar1 != '\0') goto LAB_04285e94;
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
    if ((pRVar2 != (ResourceInfo *)0x0) &&
       ((in_x0[0x1b4] == (PineconePlantfoodProjectile)0x0 ||
        (fVar7 = *(float *)(in_x0 + 0x1b0), fVar6 = (float)PVZ_T(), fVar7 <= fVar6)))) {
      pSVar3 = (SexyVector3 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)in_x0);
      pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
      local_28 = (float)GetTargetPos(in_x0,(BoardEntity *)pRVar2);
      local_24 = (undefined4)in_d1;
      local_20 = (undefined4)in_d2;
      local_18 = (float)Sexy::SexyVector3::operator-((SexyVector3 *)&local_28,pSVar3);
      local_14 = (undefined4)in_d1;
      local_10 = (undefined4)in_d2;
      uVar5 = Sexy::SexyVector3::Normalize((SexyVector3 *)&local_18);
      fVar6 = (float)FUN_0427fd84(*(undefined4 *)(in_x0 + 0xc4));
      fVar7 = (float)ArmorflameMissile::calcDesiredRot(uVar5,in_d1,in_d2,fVar6);
      Projectile::GetProps((Projectile *)in_x0);
      nop();
      local_28 = ABS(fVar7 - fVar6);
      local_18 = *(float *)(extraout_x0 + 0x1e0) * 6.2831855 * param_1;
      pfVar4 = eastl::min_alt<float>(&local_28,&local_18);
      dVar8 = ABS((double)*pfVar4);
      if ((long)(double)(fVar7 - fVar6) < 0) {
        dVar8 = -dVar8;
      }
      dVar8 = (double)fVar6 + dVar8;
      if (3.1415927410125732 < ABS(dVar8)) {
        dVar9 = 6.2831854820251465;
        if ((long)dVar8 < 0) {
          dVar9 = -6.2831854820251465;
        }
        dVar8 = dVar8 - dVar9;
      }
      FUN_0427fd88((float)dVar8,in_x0 + 0xc4);
      this_00 = (DVec3 *)Projectile::GetVelocity((Projectile *)in_x0);
      fVar6 = (float)DVec3::getLength(this_00);
      SetRotatedVelocity(in_x0,fVar6);
      Projectile::moveThroughTime((Projectile *)in_x0,param_1);
      goto LAB_04285e94;
    }
  }
  Projectile::moveThroughTime((Projectile *)in_x0,param_1);
LAB_04285e94:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

