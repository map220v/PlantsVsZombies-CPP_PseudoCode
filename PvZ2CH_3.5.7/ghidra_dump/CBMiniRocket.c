// Class: CBMiniRocket


/* CBMiniRocket::onFlyToTargetDone(BoardEntity*) */

void CBMiniRocket::onFlyToTargetDone(BoardEntity *param_1)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CBMiniRocket::StaticClassInit() */

void CBMiniRocket::StaticClassInit(void)

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
    std::string::string(asStack_10,"CBMiniRocket");
    (*pcVar2)(plVar1,asStack_10,FUN_0414a37c,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CBMiniRocket::StaticGetClass() */

long * CBMiniRocket::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CBMiniRocket",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CBMiniRocket::GetClass() const */

long * CBMiniRocket::GetClass(void)

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
  (*pcVar3)(plVar1,"CBMiniRocket",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CBMiniRocket::SetRotatedVelocity(float) */

void __thiscall CBMiniRocket::SetRotatedVelocity(CBMiniRocket *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_04145758(*(undefined4 *)(this + 0xc4));
  fVar2 = cosf(fVar1);
  fVar1 = sinf(fVar1);
  Projectile::SetVelocity((Projectile *)this,fVar2 * param_1,-(fVar1 * param_1),0.0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CBMiniRocket::CBMiniRocket() */

void __thiscall CBMiniRocket::CBMiniRocket(CBMiniRocket *this)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067ef690;
  *(undefined ***)(this + 0x10) = &PTR__CBMiniRocket_067ef880;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a8));
  this[0x1b4] = (CBMiniRocket)0x0;
  this[0x1b5] = (CBMiniRocket)0x0;
  this[0x1b6] = (CBMiniRocket)0x0;
  *(undefined4 *)(this + 0x1b0) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1a8),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  this[0x1b5] = (CBMiniRocket)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CBMiniRocket::StaticNew() */

CBMiniRocket * CBMiniRocket::StaticNew(void)

{
  CBMiniRocket *this;
  
  this = ::operator_new(0x1b8);
  CBMiniRocket(this);
  return this;
}


/* CBMiniRocket::~CBMiniRocket() */

void __thiscall CBMiniRocket::~CBMiniRocket(CBMiniRocket *this)

{
  *(undefined ***)this = &PTR_GetClass_067ef690;
  *(undefined ***)(this + 0x10) = &PTR__CBMiniRocket_067ef880;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to CBMiniRocket::~CBMiniRocket() */

void __thiscall CBMiniRocket::~CBMiniRocket(CBMiniRocket *this)

{
  ~CBMiniRocket(this + -0x10);
  return;
}


/* CBMiniRocket::~CBMiniRocket() */

void __thiscall CBMiniRocket::~CBMiniRocket(CBMiniRocket *this)

{
  ~CBMiniRocket(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CBMiniRocket::~CBMiniRocket() */

void __thiscall CBMiniRocket::~CBMiniRocket(CBMiniRocket *this)

{
  ~CBMiniRocket(this + -0x10);
  return;
}


/* CBMiniRocket::onDeflection(BoardEntity*) */

void CBMiniRocket::onDeflection(BoardEntity *param_1)

{
  FUN_0414575c(0,param_1 + 0xc4);
  PineconePlantfoodProjectile::SetOverrideTarget
            ((PineconePlantfoodProjectile *)param_1,(BoardEntity *)0x0);
  param_1[0x1b5] = (BoardEntity)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CBMiniRocket::GetTargetPos(BoardEntity*) */

void __thiscall CBMiniRocket::GetTargetPos(CBMiniRocket *this,BoardEntity *param_1)

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
      goto LAB_04147af0;
    }
  }
  this_00 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)param_1);
  fVar3 = (float)FUN_04145c8c();
  uVar5 = 0;
  EATextSquish::Vec3::Vec3(aVStack_28,0.0,fVar3,0.0);
  uVar4 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)aVStack_28);
  local_18 = CONCAT44(fVar3,uVar4);
  local_10 = uVar5;
  Sexy::SexyVector3::operator=((SexyVector3 *)&local_38,(SexyVector3 *)&local_18);
LAB_04147af0:
  local_18 = CONCAT44(uStack_34,local_38);
  local_10 = local_30;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_38,uStack_34,local_30);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CBMiniRocket::FindTargetWithFlag(BoardEntityTypeFlag) */

void __thiscall CBMiniRocket::FindTargetWithFlag(CBMiniRocket *this,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  BoardEntity *pBVar7;
  BoardEntity *pBVar8;
  float fVar9;
  float fVar10;
  undefined8 local_40;
  undefined8 local_38;
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  pBVar8 = (BoardEntity *)0x0;
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
  fVar10 = 1e+06;
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    pBVar7 = (BoardEntity *)*puVar5;
    cVar2 = PineconePlantfoodProjectile::CanBeTarget((PineconePlantfoodProjectile *)this,pBVar7);
    if (cVar2 != '\0') {
      fVar9 = (float)FUN_0414597c(*(undefined4 *)(pBVar7 + 0x18),*(undefined4 *)(pBVar7 + 0x1c),
                                  *(undefined4 *)(pBVar7 + 0x20));
      lVar6 = Board::GetBoardProperties(*(Board **)(gLawnApp + 0x9f0));
      if ((fVar9 < fVar10) && (fVar9 <= *(float *)(lVar6 + 0x10))) {
        pBVar8 = pBVar7;
        fVar10 = fVar9;
      }
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
  __stack_chk_fail(pBVar8);
}


/* CBMiniRocket::FindNewTarget() */

void __thiscall CBMiniRocket::FindNewTarget(CBMiniRocket *this)

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
/* CBMiniRocket::moveThroughTime(float) */

void CBMiniRocket::moveThroughTime(float param_1)

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
  if (in_x0[0x1b6] == (PineconePlantfoodProjectile)0x0) goto LAB_0414fde4;
  if (in_x0[0x1b5] == (PineconePlantfoodProjectile)0x0) {
    this = (RtWeakPtr *)(in_x0 + 0x1a8);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
    cVar1 = PineconePlantfoodProjectile::CanBeTarget(in_x0,(BoardEntity *)pRVar2);
    if (cVar1 == '\0') {
      FindNewTarget((CBMiniRocket *)in_x0);
    }
    cVar1 = PineconePlantfoodProjectile::TestOutWithoutTarget(in_x0);
    if (cVar1 != '\0') goto LAB_0414fde4;
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
      local_28 = (float)GetTargetPos((CBMiniRocket *)in_x0,(BoardEntity *)pRVar2);
      local_24 = (undefined4)in_d1;
      local_20 = (undefined4)in_d2;
      local_18 = (float)Sexy::SexyVector3::operator-((SexyVector3 *)&local_28,pSVar3);
      local_14 = (undefined4)in_d1;
      local_10 = (undefined4)in_d2;
      uVar5 = Sexy::SexyVector3::Normalize((SexyVector3 *)&local_18);
      fVar6 = (float)FUN_04145758(*(undefined4 *)(in_x0 + 0xc4));
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
      FUN_0414575c((float)dVar8,in_x0 + 0xc4);
      this_00 = (DVec3 *)Projectile::GetVelocity((Projectile *)in_x0);
      fVar6 = (float)DVec3::getLength(this_00);
      SetRotatedVelocity((CBMiniRocket *)in_x0,fVar6);
      Projectile::moveThroughTime((Projectile *)in_x0,param_1);
      goto LAB_0414fde4;
    }
  }
  Projectile::moveThroughTime((Projectile *)in_x0,param_1);
LAB_0414fde4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

