// Class: BoomFlowerAutoProjectile


/* BoomFlowerAutoProjectile::onDeflection(BoardEntity*) */

void BoomFlowerAutoProjectile::onDeflection(BoardEntity *param_1)

{
  PineconePlantfoodProjectile::SetOverrideTarget
            ((PineconePlantfoodProjectile *)param_1,(BoardEntity *)0x0);
  param_1[0x1b0] = (BoardEntity)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoomFlowerAutoProjectile::StaticClassInit() */

void BoomFlowerAutoProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"BoomFlowerAutoProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0411ae70,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoomFlowerAutoProjectile::StaticGetClass() */

long * BoomFlowerAutoProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BoomFlowerAutoProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoomFlowerAutoProjectile::GetClass() const */

long * BoomFlowerAutoProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"BoomFlowerAutoProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoomFlowerAutoProjectile::BoomFlowerAutoProjectile() */

void __thiscall BoomFlowerAutoProjectile::BoomFlowerAutoProjectile(BoomFlowerAutoProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067e77c0;
  *(undefined ***)(this + 0x10) = &PTR__BoomFlowerAutoProjectile_067e79b0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a8));
  this[0x1b0] = (BoomFlowerAutoProjectile)0x0;
  *(undefined4 *)(this + 0x1b4) = 0;
  *(undefined4 *)(this + 0x1b8) = 0;
  return;
}


/* BoomFlowerAutoProjectile::StaticNew() */

BoomFlowerAutoProjectile * BoomFlowerAutoProjectile::StaticNew(void)

{
  BoomFlowerAutoProjectile *this;
  
  this = ::operator_new(0x1c0);
  BoomFlowerAutoProjectile(this);
  return this;
}


/* BoomFlowerAutoProjectile::~BoomFlowerAutoProjectile() */

void __thiscall BoomFlowerAutoProjectile::~BoomFlowerAutoProjectile(BoomFlowerAutoProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067e77c0;
  *(undefined ***)(this + 0x10) = &PTR__BoomFlowerAutoProjectile_067e79b0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to BoomFlowerAutoProjectile::~BoomFlowerAutoProjectile() */

void __thiscall BoomFlowerAutoProjectile::~BoomFlowerAutoProjectile(BoomFlowerAutoProjectile *this)

{
  ~BoomFlowerAutoProjectile(this + -0x10);
  return;
}


/* BoomFlowerAutoProjectile::~BoomFlowerAutoProjectile() */

void __thiscall BoomFlowerAutoProjectile::~BoomFlowerAutoProjectile(BoomFlowerAutoProjectile *this)

{
  ~BoomFlowerAutoProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BoomFlowerAutoProjectile::~BoomFlowerAutoProjectile() */

void __thiscall BoomFlowerAutoProjectile::~BoomFlowerAutoProjectile(BoomFlowerAutoProjectile *this)

{
  ~BoomFlowerAutoProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoomFlowerAutoProjectile::GetTargetPos(BoardEntity*) */

void __thiscall
BoomFlowerAutoProjectile::GetTargetPos(BoomFlowerAutoProjectile *this,BoardEntity *param_1)

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
      local_38 = FUN_0411842c(param_1);
      lVar2 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this);
      uStack_34 = *(undefined4 *)(lVar2 + 4);
      local_30 = 0;
      goto LAB_04118884;
    }
  }
  this_00 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)param_1);
  fVar3 = (float)FUN_04115dec();
  uVar5 = 0;
  EATextSquish::Vec3::Vec3(aVStack_28,0.0,fVar3,0.0);
  uVar4 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)aVStack_28);
  local_18 = CONCAT44(fVar3,uVar4);
  local_10 = uVar5;
  Sexy::SexyVector3::operator=((SexyVector3 *)&local_38,(SexyVector3 *)&local_18);
LAB_04118884:
  local_18 = CONCAT44(uStack_34,local_38);
  local_10 = local_30;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_38,uStack_34,local_30);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoomFlowerAutoProjectile::CanBeTarget(BoardEntity*) */

void __thiscall
BoomFlowerAutoProjectile::CanBeTarget(BoomFlowerAutoProjectile *this,BoardEntity *param_1)

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
          std::string::string(asStack_20,"boomflower");
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
          goto LAB_0411bb14;
        }
      }
    }
    else {
      bVar1 = Sexy::RtObject::IsA<GridItem>((RtObject *)param_1);
      if ((bVar1) &&
         (pGVar4 = Sexy::RtObject::Cast<GridItem>((RtObject *)param_1), pGVar4 != (GridItem *)0x0))
      {
        bVar3 = (**(code **)(*(long *)pGVar4 + 0x200))();
        goto LAB_0411bb14;
      }
    }
  }
  bVar3 = 0;
LAB_0411bb14:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoomFlowerAutoProjectile::FindTargetWithFlag(BoardEntityTypeFlag) */

void __thiscall
BoomFlowerAutoProjectile::FindTargetWithFlag(BoomFlowerAutoProjectile *this,undefined4 param_2)

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
  
  local_8 = ___stack_chk_guard;
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  pBVar7 = (BoardEntity *)0x0;
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
    cVar2 = CanBeTarget(this,pBVar6);
    if ((cVar2 != '\0') &&
       (fVar8 = (float)FUN_04115b78(*(undefined4 *)(pBVar6 + 0x18),*(undefined4 *)(pBVar6 + 0x1c),
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


/* BoomFlowerAutoProjectile::FindNewTarget() */

void __thiscall BoomFlowerAutoProjectile::FindNewTarget(BoomFlowerAutoProjectile *this)

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
/* BoomFlowerAutoProjectile::moveThroughTime(float) */

void BoomFlowerAutoProjectile::moveThroughTime(float param_1)

{
  RtWeakPtr *this;
  char cVar1;
  BoomFlowerAutoProjectile *in_x0;
  ResourceInfo *pRVar2;
  SexyVector3 *pSVar3;
  DVec3 *this_00;
  long extraout_x0;
  float *pfVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined8 in_d1;
  undefined8 in_d2;
  double dVar8;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (in_x0[0x1b0] == (BoomFlowerAutoProjectile)0x0) {
    this = (RtWeakPtr *)(in_x0 + 0x1a8);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
    cVar1 = CanBeTarget(in_x0,(BoardEntity *)pRVar2);
    if (cVar1 == '\0') {
      FindNewTarget(in_x0);
    }
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
    if (pRVar2 != (ResourceInfo *)0x0) {
      pSVar3 = (SexyVector3 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)in_x0);
      this_00 = (DVec3 *)Projectile::GetVelocity((Projectile *)in_x0);
      pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
      local_28 = (float)GetTargetPos(in_x0,(BoardEntity *)pRVar2);
      local_24 = (undefined4)in_d1;
      local_20 = (undefined4)in_d2;
      local_18 = (float)Sexy::SexyVector3::operator-((SexyVector3 *)&local_28,pSVar3);
      local_14 = (undefined4)in_d1;
      local_10 = (undefined4)in_d2;
      uVar5 = Sexy::SexyVector3::Normalize((SexyVector3 *)&local_18);
      fVar6 = (float)FUN_04115ad0(*(undefined4 *)(in_x0 + 0xc4));
      fVar7 = (float)ArmorflameMissile::calcDesiredRot(uVar5,in_d1,in_d2,fVar6);
      Projectile::GetProps((Projectile *)in_x0);
      nop();
      local_28 = ABS(fVar7 - fVar6);
      local_18 = *(float *)(extraout_x0 + 0x1e0) * 6.2831855 * param_1;
      pfVar4 = eastl::min_alt<float>(&local_28,&local_18);
      if ((long)(double)(fVar7 - fVar6) < 0) {
        dVar8 = (double)fVar6 + -ABS((double)*pfVar4);
        if (3.1415927410125732 < ABS(dVar8)) goto LAB_0411c3e0;
LAB_0411c384:
        fVar6 = (float)dVar8;
      }
      else {
        dVar8 = (double)fVar6 + ABS((double)*pfVar4);
        if (ABS(dVar8) <= 3.1415927410125732) goto LAB_0411c384;
LAB_0411c3e0:
        if ((long)dVar8 < 0) {
          fVar6 = (float)(dVar8 - -6.2831854820251465);
        }
        else {
          fVar6 = (float)(dVar8 - 6.2831854820251465);
        }
      }
      FUN_04115ad4(fVar6,in_x0 + 0xc4);
      fVar6 = (float)DVec3::getLength(this_00);
      Projectile::SetRotatedVelocity((Projectile *)in_x0,fVar6);
      Projectile::moveThroughTime((Projectile *)in_x0,param_1);
      goto LAB_0411c3ac;
    }
  }
  Projectile::moveThroughTime((Projectile *)in_x0,param_1);
LAB_0411c3ac:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoomFlowerAutoProjectile::OnCollideEntity(BoardEntity*) */

void BoomFlowerAutoProjectile::OnCollideEntity(BoardEntity *param_1)

{
  RtMixedPtr<Sexy::Image> *this;
  char cVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  ResourceInfo *pRVar6;
  RtObject *pRVar7;
  long *extraout_x0;
  long lVar8;
  wchar16 *pwVar9;
  Plant *this_00;
  BoardEntity *in_x1;
  LineBreakCategory *pLVar10;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  float fVar11;
  float fVar12;
  LineBreakCategory aLStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0x1b0] == (BoardEntity)0x0) {
    cVar1 = CanBeTarget((BoomFlowerAutoProjectile *)param_1,in_x1);
    uVar4 = 0;
    if (cVar1 == '\0') goto LAB_0411c8a8;
    this = (RtMixedPtr<Sexy::Image> *)(param_1 + 0x1a8);
    cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this);
    if (cVar1 != '\0') goto LAB_0411c8a8;
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this);
    if (in_x1 != (BoardEntity *)pRVar6) {
      pRVar7 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      bVar2 = Sexy::RtObject::IsA<ZombieZombossMech_Eighties>(pRVar7);
      if (!bVar2) goto LAB_0411c8a8;
    }
    if ((((in_x1 != (BoardEntity *)0x0) &&
         (bVar2 = Sexy::RtObject::IsA<Zombie>((RtObject *)in_x1), bVar2)) &&
        (nop(), extraout_x0 != (long *)0x0)) &&
       (cVar1 = (**(code **)(*extraout_x0 + 0x2c0))(), cVar1 != '\0')) {
      if (((DAT_06aedb08 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_06aedb08), iVar5 != 0)) {
        ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet
                  ((ProbabilitySet<ZombossRobotAirDropZombieInfo> *)&DAT_06aed968);
        __cxa_guard_release(&DAT_06aedb08);
        __cxa_atexit(ProbabilitySet<bool>::~ProbabilitySet,&DAT_06aed968,&DAT_06a88000);
      }
      fVar12 = *(float *)(param_1 + 0x1b4);
      lVar8 = ProbabilitySet<bool>::GetSize((ProbabilitySet<bool> *)&DAT_06aed968);
      if (lVar8 == 0) {
        ProbabilitySet<bool>::AddItem
                  ((ProbabilitySet<bool> *)&DAT_06aed968,true,(int)(fVar12 * 100000.0));
        ProbabilitySet<bool>::AddItem
                  ((ProbabilitySet<bool> *)&DAT_06aed968,false,100000 - (int)(fVar12 * 100000.0));
      }
      pLVar10 = aLStack_18;
      cVar1 = ProbabilitySet<bool>::PickItem((ProbabilitySet<bool> *)&DAT_06aed968);
      pwVar9 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
      std::string::string(asStack_10,"DebugSpecial");
      cVar3 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                        (pwVar9,(wchar16 *)asStack_10,pLVar10,in_x3,in_x4);
      if ((cVar3 == '\0') && (cVar1 == '\0')) {
        std::string::~string(asStack_10);
        nop();
      }
      else {
        std::string::~string(asStack_10);
        nop();
                    /* WARNING: Load size is inaccurate */
        Zombie::ApplyCondition(*(Zombie **)(param_1 + 0x1b8),0,extraout_x0,0x38,1);
      }
    }
    pRVar7 = (RtObject *)Projectile::GetInstigator((Projectile *)param_1);
    if ((pRVar7 != (RtObject *)0x0) &&
       (this_00 = Sexy::RtObject::Cast<Plant>(pRVar7), this_00 != (Plant *)0x0)) {
      fVar12 = (float)Sexy::Rand(1.0);
      fVar11 = (float)Plant::GetGeneSkillBoost(this_00);
      if (fVar12 < fVar11) {
        FUN_04115b6c(param_1 + 0xdc);
      }
    }
  }
  uVar4 = Projectile::OnCollideEntity((Projectile *)param_1,in_x1);
LAB_0411c8a8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

