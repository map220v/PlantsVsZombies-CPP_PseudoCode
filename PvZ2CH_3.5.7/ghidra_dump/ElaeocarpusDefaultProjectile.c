// Class: ElaeocarpusDefaultProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElaeocarpusDefaultProjectile::StaticClassInit() */

void ElaeocarpusDefaultProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ElaeocarpusDefaultProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04259c74,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ElaeocarpusDefaultProjectile::StaticGetClass() */

long * ElaeocarpusDefaultProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ElaeocarpusDefaultProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ElaeocarpusDefaultProjectile::GetClass() const */

long * ElaeocarpusDefaultProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"ElaeocarpusDefaultProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ElaeocarpusDefaultProjectile::FillSomeInfo(float, float, int) */

void __thiscall
ElaeocarpusDefaultProjectile::FillSomeInfo
          (ElaeocarpusDefaultProjectile *this,float param_1,float param_2,int param_3)

{
  *(float *)(this + 0x1a8) = param_1;
  *(int *)(this + 0x1b0) = param_3;
  *(float *)(this + 0x1ac) = param_2;
  return;
}


/* ElaeocarpusDefaultProjectile::SetJumpTimes(int) */

void __thiscall
ElaeocarpusDefaultProjectile::SetJumpTimes(ElaeocarpusDefaultProjectile *this,int param_1)

{
  *(int *)(this + 0x1b4) = param_1;
  return;
}


/* ElaeocarpusDefaultProjectile::ElaeocarpusDefaultProjectile() */

void __thiscall
ElaeocarpusDefaultProjectile::ElaeocarpusDefaultProjectile(ElaeocarpusDefaultProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_0681b830;
  *(undefined ***)(this + 0x10) = &PTR__ElaeocarpusDefaultProjectile_0681ba20;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b8));
  *(undefined4 *)(this + 0x1b4) = 1;
  return;
}


/* ElaeocarpusDefaultProjectile::StaticNew() */

ElaeocarpusDefaultProjectile * ElaeocarpusDefaultProjectile::StaticNew(void)

{
  ElaeocarpusDefaultProjectile *this;
  
  this = ::operator_new(0x1d0);
  ElaeocarpusDefaultProjectile(this);
  return this;
}


/* ElaeocarpusDefaultProjectile::~ElaeocarpusDefaultProjectile() */

void __thiscall
ElaeocarpusDefaultProjectile::~ElaeocarpusDefaultProjectile(ElaeocarpusDefaultProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0681b830;
  *(undefined ***)(this + 0x10) = &PTR__ElaeocarpusDefaultProjectile_0681ba20;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1b8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ElaeocarpusDefaultProjectile::~ElaeocarpusDefaultProjectile() */

void __thiscall
ElaeocarpusDefaultProjectile::~ElaeocarpusDefaultProjectile(ElaeocarpusDefaultProjectile *this)

{
  ~ElaeocarpusDefaultProjectile(this + -0x10);
  return;
}


/* ElaeocarpusDefaultProjectile::~ElaeocarpusDefaultProjectile() */

void __thiscall
ElaeocarpusDefaultProjectile::~ElaeocarpusDefaultProjectile(ElaeocarpusDefaultProjectile *this)

{
  ~ElaeocarpusDefaultProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ElaeocarpusDefaultProjectile::~ElaeocarpusDefaultProjectile() */

void __thiscall
ElaeocarpusDefaultProjectile::~ElaeocarpusDefaultProjectile(ElaeocarpusDefaultProjectile *this)

{
  ~ElaeocarpusDefaultProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElaeocarpusDefaultProjectile::findNearestTargetType(BoardEntityTypeFlag) */

void __thiscall
ElaeocarpusDefaultProjectile::findNearestTargetType
          (ElaeocarpusDefaultProjectile *this,undefined4 param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float *pfVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  Zombie *pZVar11;
  GridItem *pGVar12;
  RtObject *this_01;
  RtObject *pRVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1b8);
  local_8 = ___stack_chk_guard;
  pfVar7 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar16 = *pfVar7;
  pRVar13 = (RtObject *)0x0;
  fVar15 = pfVar7[1];
  iVar3 = BoardTransforms::BoardSpaceToGridX(fVar16);
  iVar4 = BoardTransforms::BoardSpaceToGridY(fVar15);
  iVar5 = BoardConstants::NUMBER_OF_COLUMNS();
  Sexy::Insets::Insets(aIStack_30,iVar3,iVar4,iVar5 - iVar3,1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,param_2,aIStack_30);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  fVar17 = 640000.0;
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)&local_50);
    if (!bVar1) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(pRVar13);
    }
    puVar8 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    this_01 = (RtObject *)*puVar8;
    cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)this_01);
    if ((cVar2 != '\0') &&
       (fVar14 = (float)FUN_04258fd0(*(undefined4 *)(this_01 + 0x18),*(undefined4 *)(this_01 + 0x1c)
                                     ,*(undefined4 *)(this_01 + 0x20)), (float)iVar3 <= fVar14)) {
      iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
      fVar14 = (float)FUN_04258fd0(*(undefined4 *)(this_01 + 0x18),*(undefined4 *)(this_01 + 0x1c),
                                   *(undefined4 *)(this_01 + 0x20));
      iVar5 = BoardTransforms::BoardSpaceToGridX(fVar14);
      if (iVar5 < iVar4) {
        uVar9 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(this_00);
        uVar10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
        ToolPacketData::GetProps();
        local_40 = std::
                   find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<GameObject>>
                             (uVar9,uVar10,(RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
        local_38 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(this_00);
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
        if (!bVar1) {
          pZVar11 = Sexy::RtObject::Cast<Zombie>(this_01);
          if (pZVar11 != (Zombie *)0x0) {
            uVar6 = operator|(1,8);
            cVar2 = Zombie::MatchesAny(pZVar11,uVar6);
            if (((cVar2 != '\0') || (cVar2 = Zombie::HasCondition(pZVar11,0x27), cVar2 != '\0')) ||
               (cVar2 = Zombie::HasCondition(pZVar11,0x25), cVar2 != '\0')) goto LAB_0425bb80;
          }
          pGVar12 = Sexy::RtObject::Cast<GridItem>(this_01);
          if (((pGVar12 == (GridItem *)0x0) ||
              ((cVar2 = RealObject::IsOnTeam(pGVar12,1), cVar2 != '\0' &&
               (cVar2 = (**(code **)(*(long *)pGVar12 + 0x208))(pGVar12), cVar2 != '\0')))) ||
             ((cVar2 = RealObject::IsOnTeam(pGVar12,2), cVar2 != '\0' &&
              (cVar2 = (**(code **)(*(long *)pGVar12 + 0x200))(pGVar12), cVar2 != '\0')))) {
            uVar6 = *(undefined4 *)(this_01 + 0x1c);
            local_48 = FUN_04258fd0(*(undefined4 *)(this_01 + 0x18),uVar6,
                                    *(undefined4 *)(this_01 + 0x20));
            fVar14 = fVar15;
            local_44 = uVar6;
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_40,fVar16,fVar15);
            uVar6 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_48,(SexyVector2 *)&local_40);
            local_38 = CONCAT44(fVar14,uVar6);
            fVar14 = (float)VectorNorm((FPoint *)&local_38);
            if (fVar14 < fVar17) {
              pRVar13 = this_01;
              fVar17 = fVar14;
            }
          }
        }
      }
    }
LAB_0425bb80:
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
  } while( true );
}


/* ElaeocarpusDefaultProjectile::findNextTarget() */

void __thiscall ElaeocarpusDefaultProjectile::findNextTarget(ElaeocarpusDefaultProjectile *this)

{
  long lVar1;
  
  lVar1 = findNearestTargetType(this,2);
  if (lVar1 != 0) {
    return;
  }
  findNearestTargetType(this,4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElaeocarpusDefaultProjectile::DoBounce() */

void __thiscall ElaeocarpusDefaultProjectile::DoBounce(ElaeocarpusDefaultProjectile *this)

{
  float *pfVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  SexyVector3 *pSVar2;
  float fVar3;
  undefined4 local_18 [2];
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_10[0] = 0x4394c000;
  local_18[0] = 0x3f800000;
  pfVar1 = eastl::max_alt<float>((float *)local_18,(float *)local_10);
  fVar3 = *pfVar1;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)findNextTarget(this);
  if (this_00 !=
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_10,(RtWeakPtrBase *)local_18);
    Projectile::SetTarget((Projectile *)this,(RtWeakPtr *)local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    pSVar2 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_00);
    Projectile::LaunchAt((Projectile *)this,pSVar2,fVar3,*(float *)(this + 0x1ac));
    FillSomeInfo(this,fVar3,*(float *)(this + 0x1ac),*(int *)(this + 0x1b0));
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this_00 !=
                     (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)0x0);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElaeocarpusDefaultProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
ElaeocarpusDefaultProjectile::OnCollideEntity
          (ElaeocarpusDefaultProjectile *this,BoardEntity *param_1)

{
  undefined1 uVar1;
  char cVar2;
  ulong uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::push_back
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1b8),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  uVar3 = FUN_04258fa0(*(undefined8 *)(this + 0x1b8),*(undefined8 *)(this + 0x1c0));
  if (((ulong)(long)*(int *)(this + 0x1b4) < uVar3) ||
     (cVar2 = RealObject::IsOnOpposingTeam(this,2), cVar2 == '\0')) {
    uVar1 = Projectile::OnCollideEntity((Projectile *)this,param_1);
    (**(code **)(*(long *)this + 0x48))(this);
  }
  else {
    cVar2 = DoBounce(this);
    uVar1 = Projectile::OnCollideEntity((Projectile *)this,param_1);
    if (cVar2 == '\0') {
      (**(code **)(*(long *)this + 0x48))(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

