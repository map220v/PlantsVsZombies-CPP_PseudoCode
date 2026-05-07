// Class: NekotailStab


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NekotailStab::StaticClassInit() */

void NekotailStab::StaticClassInit(void)

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
    std::string::string(asStack_10,"NekotailStab");
    (*pcVar2)(plVar1,asStack_10,FUN_0413f2f8,0x1e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NekotailStab::StaticGetClass() */

long * NekotailStab::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NekotailStab",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NekotailStab::GetClass() const */

long * NekotailStab::GetClass(void)

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
  (*pcVar3)(plVar1,"NekotailStab",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NekotailStab::SetNumbInfo(float, float) */

void __thiscall NekotailStab::SetNumbInfo(NekotailStab *this,float param_1,float param_2)

{
  *(float *)(this + 0x1b4) = param_1;
  *(float *)(this + 0x1b8) = param_2;
  return;
}


/* NekotailStab::SetRotatedVelocity(float) */

void __thiscall NekotailStab::SetRotatedVelocity(NekotailStab *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_0413c204(*(undefined4 *)(this + 0xc4));
  fVar2 = cosf(fVar1);
  fVar1 = sinf(fVar1);
  Projectile::SetVelocity((Projectile *)this,fVar2 * param_1,-(fVar1 * param_1),0.0);
  return;
}


/* NekotailStab::onDeflection(BoardEntity*) */

void NekotailStab::onDeflection(BoardEntity *param_1)

{
  FUN_0413c208(0,param_1 + 0xc4);
  PineconePlantfoodProjectile::SetOverrideTarget
            ((PineconePlantfoodProjectile *)param_1,(BoardEntity *)0x0);
  param_1[0x1b0] = (BoardEntity)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NekotailStab::GetTargetPos(BoardEntity*) */

void __thiscall NekotailStab::GetTargetPos(NekotailStab *this,BoardEntity *param_1)

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
      goto LAB_0413d558;
    }
  }
  this_00 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)param_1);
  fVar3 = (float)FUN_0413c378(0xc1700000);
  uVar5 = 0;
  EATextSquish::Vec3::Vec3(aVStack_28,0.0,fVar3,0.0);
  uVar4 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)aVStack_28);
  local_18 = CONCAT44(fVar3,uVar4);
  local_10 = uVar5;
  Sexy::SexyVector3::operator=((SexyVector3 *)&local_38,(SexyVector3 *)&local_18);
LAB_0413d558:
  local_18 = CONCAT44(uStack_34,local_38);
  local_10 = local_30;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_38,uStack_34,local_30);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NekotailStab::NekotailStab() */

void __thiscall NekotailStab::NekotailStab(NekotailStab *this)

{
  long lVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067edbb0;
  *(undefined ***)(this + 0x10) = &PTR__NekotailStab_067edda0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a8));
  this[0x1b0] = (NekotailStab)0x0;
  *(undefined4 *)(this + 0x1b4) = 0;
  *(undefined4 *)(this + 0x1b8) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1c0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1a8),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  this[0x1b0] = (NekotailStab)0x0;
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x1b4) = 0;
  *(undefined4 *)(this + 0x1b8) = 0;
  *(undefined4 *)(this + 0x1d8) = 0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NekotailStab::StaticNew() */

NekotailStab * NekotailStab::StaticNew(void)

{
  NekotailStab *this;
  
  this = ::operator_new(0x1e0);
  NekotailStab(this);
  return this;
}


/* NekotailStab::~NekotailStab() */

void __thiscall NekotailStab::~NekotailStab(NekotailStab *this)

{
  *(undefined ***)this = &PTR_GetClass_067edbb0;
  *(undefined ***)(this + 0x10) = &PTR__NekotailStab_067edda0;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1c0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to NekotailStab::~NekotailStab() */

void __thiscall NekotailStab::~NekotailStab(NekotailStab *this)

{
  ~NekotailStab(this + -0x10);
  return;
}


/* NekotailStab::~NekotailStab() */

void __thiscall NekotailStab::~NekotailStab(NekotailStab *this)

{
  ~NekotailStab(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NekotailStab::~NekotailStab() */

void __thiscall NekotailStab::~NekotailStab(NekotailStab *this)

{
  ~NekotailStab(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NekotailStab::CanBeTarget(BoardEntity*) */

void __thiscall NekotailStab::CanBeTarget(NekotailStab *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *extraout_x0;
  string *psVar6;
  GridItem *pGVar7;
  code *pcVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (BoardEntity *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)&local_18);
    cVar1 = BoardEntity::HasBeHitted(param_1,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    if (cVar1 == '\0') {
      this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(this + 0x1c0);
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
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      if (!bVar2) {
        bVar2 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
        if (bVar2) {
          nop();
          if (extraout_x0 != (long *)0x0) {
            cVar1 = (**(code **)(*extraout_x0 + 0x328))();
            if (cVar1 == '\0') {
              pcVar8 = *(code **)(*extraout_x0 + 0x3d0);
              psVar6 = (string *)
                       Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
              std::string::string((string *)aRStack_20,"nekotail");
              ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar6);
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)&local_18);
              cVar1 = (*pcVar8)(extraout_x0,(RtWeakPtr<Sexy::SoundResource> *)&local_10,0);
              bVar3 = 0;
              if ((cVar1 != '\0') && (cVar1 = Zombie::HasCondition(extraout_x0,0x27), cVar1 == '\0')
                 ) {
                bVar3 = Zombie::HasCondition(extraout_x0,0x25);
                bVar3 = bVar3 ^ 1;
              }
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
              std::string::~string((string *)aRStack_20);
              nop();
              goto LAB_04140ab0;
            }
          }
        }
        else {
          bVar2 = Sexy::RtObject::IsA<GridItem>((RtObject *)param_1);
          if ((bVar2) &&
             (pGVar7 = Sexy::RtObject::Cast<GridItem>((RtObject *)param_1),
             pGVar7 != (GridItem *)0x0)) {
            bVar3 = (**(code **)(*(long *)pGVar7 + 0x200))();
            goto LAB_04140ab0;
          }
        }
      }
    }
  }
  bVar3 = 0;
LAB_04140ab0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NekotailStab::FindTargetWithFlag(BoardEntityTypeFlag) */

void __thiscall NekotailStab::FindTargetWithFlag(NekotailStab *this,undefined4 param_2)

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
    cVar2 = CanBeTarget(this,pBVar7);
    if (cVar2 != '\0') {
      fVar9 = (float)FUN_0413c2ac(*(undefined4 *)(pBVar7 + 0x18),*(undefined4 *)(pBVar7 + 0x1c),
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


/* NekotailStab::FindNewTarget() */

void __thiscall NekotailStab::FindNewTarget(NekotailStab *this)

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
/* NekotailStab::moveThroughTime(float) */

void NekotailStab::moveThroughTime(float param_1)

{
  RtWeakPtr *this;
  char cVar1;
  NekotailStab *in_x0;
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
  if (in_x0[0x1b0] == (NekotailStab)0x0) {
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
      fVar6 = (float)FUN_0413c204(*(undefined4 *)(in_x0 + 0xc4));
      fVar7 = (float)ArmorflameMissile::calcDesiredRot(uVar5,in_d1,in_d2,fVar6);
      Projectile::GetProps((Projectile *)in_x0);
      nop();
      local_28 = ABS(fVar7 - fVar6);
      local_18 = *(float *)(extraout_x0 + 0x1e0) * 6.2831855 * param_1;
      pfVar4 = eastl::min_alt<float>(&local_28,&local_18);
      if ((long)(double)(fVar7 - fVar6) < 0) {
        dVar8 = (double)fVar6 + -ABS((double)*pfVar4);
        if (3.1415927410125732 < ABS(dVar8)) goto LAB_041411f0;
LAB_04141194:
        fVar6 = (float)dVar8;
      }
      else {
        dVar8 = (double)fVar6 + ABS((double)*pfVar4);
        if (ABS(dVar8) <= 3.1415927410125732) goto LAB_04141194;
LAB_041411f0:
        if ((long)dVar8 < 0) {
          fVar6 = (float)(dVar8 - -6.2831854820251465);
        }
        else {
          fVar6 = (float)(dVar8 - 6.2831854820251465);
        }
      }
      FUN_0413c208(fVar6,in_x0 + 0xc4);
      fVar6 = (float)DVec3::getLength(this_00);
      SetRotatedVelocity(in_x0,fVar6);
      Projectile::moveThroughTime((Projectile *)in_x0,param_1);
      goto LAB_041411bc;
    }
  }
  Projectile::moveThroughTime((Projectile *)in_x0,param_1);
LAB_041411bc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NekotailStab::OnCollideEntity(BoardEntity*) */

void NekotailStab::OnCollideEntity(BoardEntity *param_1)

{
  RtWeakPtr *this;
  char cVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  Zombie *this_00;
  long lVar6;
  wchar16 *pwVar7;
  ResourceInfo *pRVar8;
  RtObject *this_01;
  BoardEntity *in_x1;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar9;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  ZombieConditionsStruct *pZVar11;
  float fVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0x1b0] == (BoardEntity)0x0) {
    cVar1 = CanBeTarget((NekotailStab *)param_1,in_x1);
    uVar4 = 0;
    if (cVar1 == '\0') goto LAB_041418ac;
    this = (RtWeakPtr *)(param_1 + 0x1a8);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
    if ((bVar2) &&
       (pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this),
       in_x1 != (BoardEntity *)pRVar8)) {
      this_01 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      bVar2 = Sexy::RtObject::IsA<ZombieZombossMech_Eighties>(this_01);
      if (!bVar2) goto LAB_041418ac;
    }
    if ((in_x1 != (BoardEntity *)0x0) &&
       (bVar2 = Sexy::RtObject::IsA<Zombie>((RtObject *)in_x1), bVar2)) {
      nop();
      if ((this_00 != (Zombie *)0x0) &&
         (cVar1 = (**(code **)(*(long *)this_00 + 0x2c0))(), cVar1 != '\0')) {
        if (((DAT_06aee5c8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_06aee5c8), iVar5 != 0)) {
          ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet
                    ((ProbabilitySet<ZombossRobotAirDropZombieInfo> *)&DAT_06aee6e0);
          __cxa_guard_release(&DAT_06aee5c8);
          __cxa_atexit(ProbabilitySet<bool>::~ProbabilitySet,&DAT_06aee6e0,&DAT_06a88000);
        }
        fVar10 = *(float *)(param_1 + 0x1b4);
        lVar6 = ProbabilitySet<bool>::GetSize((ProbabilitySet<bool> *)&DAT_06aee6e0);
        if (lVar6 == 0) {
          ProbabilitySet<bool>::AddItem
                    ((ProbabilitySet<bool> *)&DAT_06aee6e0,true,(int)(fVar10 * 100000.0));
          ProbabilitySet<bool>::AddItem
                    ((ProbabilitySet<bool> *)&DAT_06aee6e0,false,100000 - (int)(fVar10 * 100000.0));
        }
        cVar1 = ProbabilitySet<bool>::PickItem((ProbabilitySet<bool> *)&DAT_06aee6e0);
        pwVar7 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
        pRVar9 = aRStack_28;
        std::string::string(asStack_20,"DebugSpecial");
        cVar3 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                          (pwVar7,(wchar16 *)asStack_20,(LineBreakCategory *)pRVar9,in_x3,in_x4);
        if ((cVar3 == '\0') && (cVar1 == '\0')) {
          std::string::~string(asStack_20);
          nop();
        }
        else {
          std::string::~string(asStack_20);
          nop();
                    /* WARNING: Load size is inaccurate */
          pZVar11._0_4_ = *(ZombieConditionsStruct **)(param_1 + 0x1b8);
          PVPSeedBankModule::GetPVPSkillEnergyUI();
          ZombieConditionsStruct::ZombieConditionsStruct(pZVar11._0_4_,asStack_20,0x38,aRStack_28);
          Zombie::ApplyCondition(this_00,(ZombieConditionsStruct *)asStack_20);
          PVPZoneData::~PVPZoneData((PVPZoneData *)asStack_20);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
        }
      }
      fVar10 = (float)Sexy::Rand(1.0);
      if (fVar10 < *(float *)(param_1 + 0x1d8)) {
        FUN_0413c2a0(param_1 + 0x4c);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)asStack_20,(RtWeakPtrBase *)aRStack_28);
        std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
        push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                   *)(param_1 + 0x1c0),(RtWeakPtr *)asStack_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      }
    }
  }
  uVar4 = Projectile::OnCollideEntity((Projectile *)param_1,in_x1);
LAB_041418ac:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

