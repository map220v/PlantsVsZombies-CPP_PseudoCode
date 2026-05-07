// Class: PlantGroup


/* PlantGroup::GetTopPlant() */

void __thiscall PlantGroup::GetTopPlant(PlantGroup *this)

{
  PlantsSortedByLayer::GetTopPlant();
  return;
}


/* PlantGroup::Count() */

void __thiscall PlantGroup::Count(PlantGroup *this)

{
  PlantsSortedByLayer::Count((PlantsSortedByLayer *)(this + 0xb0));
  return;
}


/* PlantGroup::Plants() const */

void PlantGroup::Plants(void)

{
  nop();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::HasPlant(Sexy::RtWeakPtr<Plant>) */

void __thiscall PlantGroup::HasPlant(PlantGroup *this,RtWeakPtrBase *param_2)

{
  undefined4 uVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  uVar1 = PlantsSortedByLayer::HasPlant((PlantsSortedByLayer *)(this + 0xb0),aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* PlantGroup::Empty() */

void __thiscall PlantGroup::Empty(PlantGroup *this)

{
  PlantsSortedByLayer::Empty((PlantsSortedByLayer *)(this + 0xb0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::CanHaveFrost() */

void PlantGroup::CanHaveFrost(void)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  RtMixedPtrBase *this;
  Plant *this_00;
  undefined8 uVar4;
  undefined8 uStack_18;
  undefined8 uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  puVar3 = (undefined8 *)Plants();
  uStack_18 = FUN_03f3ffd8(*puVar3);
  uStack_10 = FUN_03f40028(puVar3[1]);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&uStack_18,(__normal_iterator *)&uStack_10);
    if (!bVar1) {
      uVar4 = 1;
LAB_03f403d0:
      if (lStack_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar4);
    }
    this = (RtMixedPtrBase *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_18);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this);
    if (cVar2 != '\0') {
      this_00 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this);
      cVar2 = Plant::IsFrostImmune(this_00);
      if (cVar2 != '\0') {
        uVar4 = 0;
        goto LAB_03f403d0;
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&uStack_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::StaticClassInit() */

void PlantGroup::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantsSortedByLayer");
    (*pcVar3)(plVar2,asStack_10,FUN_03f4330c,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantGroup");
    (*pcVar3)(plVar2,asStack_10,FUN_03f3fc5c,200,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGroup::StaticGetClass() */

long * PlantGroup::StaticGetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"PlantGroup",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantGroup::GetClass() const */

long * PlantGroup::GetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"PlantGroup",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::SetGridLocation(Sexy::Point const&) */

void __thiscall PlantGroup::SetGridLocation(PlantGroup *this,Point *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  PlantGroup PVar5;
  code *pcVar6;
  int local_20;
  int local_1c;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  iVar1 = *(int *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0xa4) = iVar1;
  *(undefined4 *)(this + 0xa8) = uVar2;
  if (-1 < iVar1) {
    iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
    if ((iVar1 < iVar3) && (iVar1 = *(int *)(this + 0xa8), -1 < iVar1)) {
      iVar3 = BoardConstants::NUMBER_OF_ROWS();
      PVar5 = (PlantGroup)(iVar1 < iVar3);
      goto LAB_03f3f5e4;
    }
  }
  PVar5 = (PlantGroup)0x0;
LAB_03f3f5e4:
  this[0xac] = PVar5;
  BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)param_1,param_1);
  pcVar6 = *(code **)(*(long *)this + 0x78);
  puVar4 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)&local_18,(float)local_20,(float)local_1c - 10.0,*(float *)(puVar4 + 1));
  (*pcVar6)(this,(Vec3 *)&local_18);
  if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
    local_18 = *puVar4;
    local_10 = *(undefined4 *)(puVar4 + 1);
    local_10 = Board::calculateRoofOffsetZ((float)local_18);
    (**(code **)(*(long *)this + 0x78))(this,(Vec3 *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::NeedsThawing() */

void __thiscall PlantGroup::NeedsThawing(PlantGroup *this)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetTopPlant(this);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
  if (cVar1 != '\0') {
    uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    cVar2 = Plant::HasCondition(uVar3,6);
    if (cVar2 == '\0') {
      uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      cVar2 = Plant::HasCondition(uVar3,7);
      if (cVar2 == '\0') {
        uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        cVar1 = Plant::HasCondition(uVar3,8);
      }
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* PlantGroup::propagateConversionConditionToGroup(PlantConditions, float, float) */

void __thiscall
PlantGroup::propagateConversionConditionToGroup
          (undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this;
  ulong uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)Plants();
  uVar4 = *puVar1;
  uVar2 = FUN_03f3f35c(uVar4,puVar1[1]);
  if (1 < uVar2) {
    uVar3 = 1;
    while (uVar3 < uVar2) {
      this = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03f3f378(uVar4,uVar3);
      uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
      Plant::ApplyCondition(param_1,param_2,uVar4,param_4);
      uVar4 = *puVar1;
      uVar2 = FUN_03f3f35c(uVar4,puVar1[1]);
      uVar3 = uVar3 + 1;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::PlayChewedOnSound() */

void __thiscall PlantGroup::PlayChewedOnSound(PlantGroup *this)

{
  bool bVar1;
  long lVar2;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetTopPlant(this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar1) {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    (**(code **)(**(long **)(lVar2 + 0xa8) + 0xa0))(*(long **)(lVar2 + 0xa8));
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGroup::HasPlant(std::string const&) */

void __thiscall PlantGroup::HasPlant(PlantGroup *this,string *param_1)

{
  PlantsSortedByLayer::HasPlant((PlantsSortedByLayer *)(this + 0xb0),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::HasPlant(BoardEntity*) */

void __thiscall PlantGroup::HasPlant(PlantGroup *this,BoardEntity *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  BoardEntity *pBVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined8 *)Plants();
  local_18 = FUN_03f3ffd8(*puVar2);
  local_10 = FUN_03f40028(puVar2[1]);
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    pBVar3 = (BoardEntity *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    if (param_1 == pBVar3) break;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::AliveCount() */

void PlantGroup::AliveCount(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  RtWeakPtrBase *pRVar5;
  long lVar6;
  int iVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  iVar7 = 0;
  local_8 = ___stack_chk_guard;
  puVar4 = (undefined8 *)Plants();
  local_18 = FUN_03f3ffd8(*puVar4);
  local_10 = FUN_03f40028(puVar4[1]);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pRVar5 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar5);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20);
    if (cVar2 != '\0') {
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      iVar3 = FUN_03f3f348(*(undefined1 *)(lVar6 + 0x299));
      if (iVar3 == 0) {
        iVar7 = iVar7 + 1;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar7);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::GetPlantAtLayer(MultiPlantGridLayer) */

void PlantGroup::GetPlantAtLayer
               (RtWeakPtr<Sexy::SoundResource> *param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  RtWeakPtrBase *pRVar5;
  long lVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar4 = (undefined8 *)Plants();
  local_18 = FUN_03f3ffd8(*puVar4);
  local_10 = FUN_03f40028(puVar4[1]);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)param_1);
LAB_03f402fc:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(param_1);
    }
    pRVar5 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar5);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20);
    if (cVar2 != '\0') {
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      iVar3 = FUN_03f3f350(*(undefined4 *)(lVar6 + 0x230));
      if (iVar3 == param_3) {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(param_1,(RtWeakPtrBase *)aRStack_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
        goto LAB_03f402fc;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::canHaveFrost() */

void PlantGroup::canHaveFrost(void)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  RtMixedPtrBase *this;
  Plant *this_00;
  undefined8 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar3 = (undefined8 *)Plants();
  local_18 = FUN_03f3ffd8(*puVar3);
  local_10 = FUN_03f40028(puVar3[1]);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
      uVar4 = 1;
LAB_03f403d0:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar4);
    }
    this = (RtMixedPtrBase *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
    ;
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this);
    if (cVar2 != '\0') {
      this_00 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this);
      cVar2 = Plant::IsFrostImmune(this_00);
      if (cVar2 != '\0') {
        uVar4 = 0;
        goto LAB_03f403d0;
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::TakeDamage(DamageInfo const&) */

void __thiscall PlantGroup::TakeDamage(PlantGroup *this,DamageInfo *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  Plant *pPVar5;
  undefined1 auVar6 [16];
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetTopPlant(this);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
  if (cVar1 == '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  else {
    lVar3 = operator&(*(undefined8 *)(param_1 + 0x10),0x3f8000000);
    if ((lVar3 != 0) && (cVar1 = canHaveFrost(), cVar1 != '\0')) {
      pPVar5 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      iVar2 = DamageInfo::GetFrostAmount(param_1);
      Plant::AddFrost(pPVar5,iVar2);
      pPVar5 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      cVar1 = Plant::IsIceblocked(pPVar5);
      if (cVar1 != '\0') {
        auVar6 = PVZ_EOT();
        propagateConversionConditionToGroup((PlantGroup *)auVar6,0,this,0x23);
      }
    }
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    (**(code **)(*plVar4 + 0x110))(plVar4,param_1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::FindValidPlantToShovel() */

void __thiscall PlantGroup::FindValidPlantToShovel(PlantGroup *this)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  RtMixedPtrBase *this_00;
  long *plVar4;
  long lVar5;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar3 = (undefined8 *)Plants();
  local_18 = FUN_03f3ffd8(*puVar3);
  local_10 = FUN_03f40028(puVar3[1]);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this_00 = (RtMixedPtrBase *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar2 != '\0') {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      cVar2 = (**(code **)(*plVar4 + 0x158))();
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)this_00);
        goto LAB_03f405ec;
      }
    }
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar2 != '\0') {
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      cVar2 = FUN_03f3f354(*(undefined1 *)(lVar5 + 0x189));
      if (cVar2 == '\0') break;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
LAB_03f405ec:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::CollidesWithType(CollisionTypeFlags) const */

void __thiscall PlantGroup::CollidesWithType(undefined8 param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  RtMixedPtrBase *this;
  long lVar4;
  long *plVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar3 = (undefined8 *)Plants();
  local_18 = FUN_03f3ffd8(*puVar3);
  local_10 = FUN_03f40028(puVar3[1]);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this = (RtMixedPtrBase *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
    ;
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this);
    if ((cVar2 != '\0') &&
       (lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this),
       lVar4 != 0)) {
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this);
      cVar2 = (**(code **)(*plVar5 + 0xb8))(plVar5,param_2);
      if (cVar2 != '\0') break;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::OverrideProjectileCollision(Projectile*) */

void __thiscall PlantGroup::OverrideProjectileCollision(PlantGroup *this,Projectile *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  RtMixedPtrBase *this_00;
  long *plVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar3 = (undefined8 *)Plants();
  local_18 = FUN_03f3ffd8(*puVar3);
  local_10 = FUN_03f40028(puVar3[1]);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this_00 = (RtMixedPtrBase *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar2 != '\0') {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      cVar2 = (**(code **)(*plVar4 + 0x168))(plVar4,param_1);
      if (cVar2 != '\0') break;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::HasPlantfoodedPlant() */

void PlantGroup::HasPlantfoodedPlant(void)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  RtMixedPtrBase *this;
  Plant *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar3 = (undefined8 *)Plants();
  local_18 = FUN_03f3ffd8(*puVar3);
  local_10 = FUN_03f40028(puVar3[1]);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this = (RtMixedPtrBase *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
    ;
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this);
    if (cVar2 != '\0') {
      this_00 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this);
      if (*(code **)(*(long *)this_00 + 0x1f8) == Plant::IsInPlantFoodState) {
        cVar2 = Plant::IsInPlantFoodState(this_00);
      }
      else {
        cVar2 = (**(code **)(*(long *)this_00 + 0x1f8))();
      }
      if (cVar2 != '\0') break;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::HasNonRelocatingPlant() */

void PlantGroup::HasNonRelocatingPlant(void)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  undefined8 *puVar4;
  RtMixedPtrBase *this;
  long lVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar4 = (undefined8 *)Plants();
  local_18 = FUN_03f3ffd8(*puVar4);
  local_10 = FUN_03f40028(puVar4[1]);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
        cVar2 = '\0', bVar1) {
    this = (RtMixedPtrBase *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
    ;
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this);
    if (cVar2 != '\0') {
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      cVar3 = FUN_03f3f33c(*(undefined4 *)(lVar5 + 0x1d0));
      if (cVar3 == '\0') break;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::HasInvinciblePlant() */

void PlantGroup::HasInvinciblePlant(void)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  RtMixedPtrBase *this;
  Plant *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar3 = (undefined8 *)Plants();
  local_18 = FUN_03f3ffd8(*puVar3);
  local_10 = FUN_03f40028(puVar3[1]);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this = (RtMixedPtrBase *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
    ;
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this);
    if (cVar2 != '\0') {
      this_00 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this);
      cVar2 = Plant::IsInvincible(this_00,false);
      if (cVar2 != '\0') break;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::HasNoncrushablePlant() */

void PlantGroup::HasNoncrushablePlant(void)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  undefined8 *puVar4;
  RtMixedPtrBase *this;
  long lVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar4 = (undefined8 *)Plants();
  local_18 = FUN_03f3ffd8(*puVar4);
  local_10 = FUN_03f40028(puVar4[1]);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
        cVar2 = '\0', bVar1) {
    this = (RtMixedPtrBase *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
    ;
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this);
    if (cVar2 != '\0') {
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      cVar3 = (**(code **)(**(long **)(lVar5 + 0xa8) + 0x330))(*(long **)(lVar5 + 0xa8));
      if (cVar3 == '\0') break;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::CanBeRangeTargeted() */

void PlantGroup::CanBeRangeTargeted(void)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  RtMixedPtrBase *this;
  Plant *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar4 = (undefined8 *)Plants();
  local_18 = FUN_03f3ffd8(*puVar4);
  local_10 = FUN_03f40028(puVar4[1]);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this = (RtMixedPtrBase *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
    ;
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this);
    if (cVar2 != '\0') {
      this_00 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this);
      cVar2 = Plant::CanBeRangeTargeted(this_00);
      uVar3 = 0;
      if (cVar2 == '\0') goto LAB_03f40bb4;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  uVar3 = 1;
LAB_03f40bb4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::AttackRelocateGroup(Sexy::Point&, float, float, RelocationEvent) */

void __thiscall
PlantGroup::AttackRelocateGroup
          (Plant *param_1_00,undefined4 param_3,undefined8 param_3_00,TPoint *param_1,
          undefined8 *param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  RtMixedPtrBase *this;
  GameObject *this_00;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar4 = (undefined8 *)Plants();
  local_20 = FUN_03f3ffd8(*puVar4);
  local_18 = FUN_03f40028(puVar4[1]);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    this = (RtMixedPtrBase *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20)
    ;
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this);
    if (cVar2 != '\0') {
      this_00 = (GameObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      cVar2 = GameObject::IsDestroyed(this_00);
      if (cVar2 == '\0') {
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
        iVar3 = FUN_03f3f348(*(undefined1 *)(lVar5 + 0x299));
        if (iVar3 == 0) {
          uVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
          Sexy::Point::Point(aPStack_10,param_1);
          local_30 = param_5[4];
          local_28 = *(undefined4 *)(param_5 + 5);
          local_50 = *param_5;
          uStack_48 = param_5[1];
          local_40 = param_5[2];
          uStack_38 = param_5[3];
          Plant::StartRelocate(param_1_00._0_4_,param_3,uVar6,aPStack_10,&local_50);
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::GetPlantOfClass(std::string) const */

void PlantGroup::GetPlantOfClass
               (RtWeakPtr<Sexy::SoundResource> *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  RtMixedPtrBase *this;
  long lVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar3 = (char *)FUN_0547429c(param_3);
  uVar4 = Sexy::RtClass::StaticGetClassNamed(pcVar3);
  puVar5 = (undefined8 *)Plants();
  local_18 = FUN_03f3ffd8(*puVar5);
  local_10 = FUN_03f40028(puVar5[1]);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)param_1);
LAB_03f40e1c:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(param_1);
    }
    this = (RtMixedPtrBase *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
    ;
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this);
    if (cVar2 != '\0') {
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      cVar2 = (**(code **)(**(long **)(lVar6 + 0xa8) + 0x20))(*(long **)(lVar6 + 0xa8),uVar4);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(param_1,(RtWeakPtrBase *)this);
        goto LAB_03f40e1c;
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::NeutralizeSplashDamage() */

void PlantGroup::NeutralizeSplashDamage(void)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  RtMixedPtrBase *this;
  long *plVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar3 = (undefined8 *)Plants();
  local_18 = FUN_03f3ffd8(*puVar3);
  local_10 = FUN_03f40028(puVar3[1]);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this = (RtMixedPtrBase *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
    ;
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this);
    if (cVar2 != '\0') {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this);
      cVar2 = (**(code **)(*plVar4 + 0x128))();
      if (cVar2 != '\0') break;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::SetProtectedFromShovel(bool) */

void __thiscall PlantGroup::SetProtectedFromShovel(PlantGroup *this,bool param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  RtWeakPtrBase *pRVar4;
  long lVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar3 = (undefined8 *)Plants();
  local_18 = FUN_03f3ffd8(*puVar3);
  local_10 = FUN_03f40028(puVar3[1]);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pRVar4 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar4);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20);
    if (cVar2 != '\0') {
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      FUN_03f3f334(lVar5 + 0x189,param_1);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::GetEntityHeight() const */

void PlantGroup::GetEntityHeight(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  RtMixedPtrBase *this;
  long *plVar5;
  int iVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  iVar6 = 0;
  local_8 = ___stack_chk_guard;
  puVar4 = (undefined8 *)Plants();
  local_18 = FUN_03f3ffd8(*puVar4);
  local_10 = FUN_03f40028(puVar4[1]);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this = (RtMixedPtrBase *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
    ;
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this);
    if (cVar2 != '\0') {
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this);
      iVar3 = (**(code **)(*plVar5 + 0x180))();
      if (iVar6 < iVar3) {
        iVar6 = iVar3;
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar6);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::IsIceblocked() */

void PlantGroup::IsIceblocked(void)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  RtMixedPtrBase *this;
  Plant *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar3 = (undefined8 *)Plants();
  local_18 = FUN_03f3ffd8(*puVar3);
  local_10 = FUN_03f40028(puVar3[1]);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this = (RtMixedPtrBase *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
    ;
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this);
    if (cVar2 != '\0') {
      this_00 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this);
      cVar2 = Plant::IsIceblocked(this_00);
      if (cVar2 != '\0') break;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::ApplyCondition(PlantConditions, float, float) */

void __thiscall
PlantGroup::ApplyCondition
          (undefined4 param_1,PlantConditionTracker *param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  RtMixedPtrBase *pRVar4;
  PlayerInfo *this;
  undefined8 uVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar3 = (undefined8 *)Plants();
  local_18 = FUN_03f3ffd8(*puVar3);
  local_10 = FUN_03f40028(puVar3[1]);
  if ((float)param_2._0_4_ == 0.0) {
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2)
    {
      pRVar4 = (RtMixedPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      cVar1 = Sexy::RtMixedPtrBase::IsValid(pRVar4);
      if (cVar1 != '\0') {
        uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar4);
        Plant::ApplyCondition(param_1,0,uVar5,param_4);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
  }
  else {
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2)
    {
      pRVar4 = (RtMixedPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      cVar1 = Sexy::RtMixedPtrBase::IsValid(pRVar4);
      if (cVar1 != '\0') {
        this = (PlayerInfo *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar4);
        uVar5 = PlayerInfo::GetDisplayingBundleList(this);
        PlantConditionTracker::SetAdditionalValue(param_2._0_4_,uVar5,param_4);
        uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar4);
        Plant::ApplyCondition(param_1,0,uVar5,param_4);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::ApplyConversionCondition(PlantConditions, float, float) */

void __thiscall
PlantGroup::ApplyConversionCondition
          (PlantGroup *param_1,undefined4 param_2,PlantGroup *this,undefined4 param_4)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  RtMixedPtrBase *this_00;
  Plant *this_01;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar3 = (undefined8 *)Plants();
  local_18 = FUN_03f3ffd8(*puVar3);
  local_10 = FUN_03f40028(puVar3[1]);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this_00 = (RtMixedPtrBase *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar2 != '\0') {
      this_01 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      cVar2 = Plant::CanBeConvertedByCondition(this_01);
      if (cVar2 == '\0') goto switchD_03f413cc_caseD_3;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  switch(param_4) {
  case 1:
    uVar5 = 0x24;
    break;
  case 2:
    uVar5 = 0x25;
    break;
  default:
    goto switchD_03f413cc_caseD_3;
  case 6:
    uVar5 = 0x23;
    break;
  case 0x10:
    uVar5 = 0x27;
    break;
  case 0x18:
    uVar5 = 0x26;
  }
  GetTopPlant(this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_10);
  if (bVar1) {
    uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    Plant::ApplyCondition((undefined4)param_1._0_4_,param_2,uVar4,param_4);
  }
  propagateConversionConditionToGroup(param_1._0_4_,param_2,this,uVar5);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
switchD_03f413cc_caseD_3:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::RevertConversionCondition(PlantConditions) */

void __thiscall PlantGroup::RevertConversionCondition(undefined8 param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  RtMixedPtrBase *this;
  Plant *pPVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar3 = (undefined8 *)Plants();
  local_18 = FUN_03f3ffd8(*puVar3);
  local_10 = FUN_03f40028(puVar3[1]);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this = (RtMixedPtrBase *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
    ;
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this);
    if (cVar2 != '\0') {
      pPVar4 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)this);
      Plant::EndCondition(pPVar4,param_2);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGroup::UpdatePlantfoodRendering() */

void __thiscall PlantGroup::UpdatePlantfoodRendering(PlantGroup *this)

{
  char cVar1;
  undefined1 auVar2 [16];
  
  cVar1 = HasPlantfoodedPlant();
  if (cVar1 == '\0') {
    if (this[0xad] != (PlantGroup)0x0) {
      this[0xad] = (PlantGroup)0x0;
      RevertConversionCondition(this,0x29);
      return;
    }
  }
  else if (this[0xad] == (PlantGroup)0x0) {
    this[0xad] = (PlantGroup)0x1;
    auVar2 = PVZ_EOT();
    ApplyCondition((PlantGroup *)auVar2,0,this,0x29);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::fixFrost() */

void PlantGroup::fixFrost(void)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar6;
  Plant *pPVar7;
  RtWeakPtrBase *pRVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar3 = (undefined8 *)Plants();
  uVar4 = FUN_03f3f35c(*puVar3,puVar3[1]);
  if (1 < uVar4) {
    cVar1 = canHaveFrost();
    if (cVar1 == '\0') {
      local_18 = FUN_03f3ffd8(*puVar3);
      local_10 = FUN_03f40028(puVar3[1]);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
            bVar2) {
        pRVar8 = (RtWeakPtrBase *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar8);
        cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20);
        if (cVar1 != '\0') {
          pPVar7 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
          fVar11 = (float)Plant::GetFrostAmount(pPVar7);
          if (0.0 < fVar11) {
            pPVar7 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
            Plant::ClearFrost(pPVar7);
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
      }
    }
    else {
      fVar11 = 0.0;
      uVar9 = *puVar3;
      uVar4 = 1;
      uVar5 = FUN_03f3f35c(uVar9,puVar3[1]);
      if (1 < uVar5) {
        do {
          pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03f3f378(uVar9,uVar4);
          pPVar7 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
          fVar10 = (float)Plant::GetFrostAmount(pPVar7);
          if (0.0 < fVar10) {
            if (fVar11 <= fVar10) {
              fVar11 = fVar10;
            }
            pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03f3f378(*puVar3,uVar4);
            pPVar7 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
            Plant::ClearFrost(pPVar7);
          }
          uVar9 = *puVar3;
          uVar4 = uVar4 + 1;
          uVar5 = FUN_03f3f35c(uVar9,puVar3[1]);
        } while (uVar4 < uVar5);
      }
      pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03f3f378(uVar9,0);
      pPVar7 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
      fVar10 = (float)Plant::GetFrostAmount(pPVar7);
      if (0.0 < fVar11 - fVar10) {
        pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03f3f378(*puVar3,0);
        pPVar7 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
        Plant::AddFrost(pPVar7,(int)(fVar11 - fVar10));
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::CanBeShoveled() */

void __thiscall PlantGroup::CanBeShoveled(PlantGroup *this)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined8 *puVar4;
  RtMixedPtrBase *this_00;
  long *plVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Empty(this);
  uVar2 = 0;
  if (cVar1 == '\0') {
    puVar4 = (undefined8 *)Plants();
    local_18 = FUN_03f3ffd8(*puVar4);
    local_10 = FUN_03f40028(puVar4[1]);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar3)
    {
      this_00 = (RtMixedPtrBase *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
      if (cVar1 != '\0') {
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        cVar1 = (**(code **)(*plVar5 + 0x158))();
        uVar2 = 0;
        if (cVar1 == '\0') goto LAB_03f41780;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
    uVar2 = 1;
  }
LAB_03f41780:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::CanApplyPlantfood() */

void __thiscall PlantGroup::CanApplyPlantfood(PlantGroup *this)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  undefined8 *puVar4;
  RtMixedPtrBase *this_00;
  Plant *pPVar5;
  byte bVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Empty(this);
  bVar2 = 0;
  if (cVar1 == '\0') {
    puVar4 = (undefined8 *)Plants();
    local_18 = FUN_03f3ffd8(*puVar4);
    local_10 = FUN_03f40028(puVar4[1]);
    bVar2 = 0;
    bVar6 = 0;
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar3)
    {
      this_00 = (RtMixedPtrBase *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
      if (cVar1 == '\0') {
        cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
      }
      else {
        pPVar5 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        cVar1 = Plant::CanApplyPlantfood(pPVar5);
        if (cVar1 != '\0') {
          bVar2 = 1;
        }
        cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
      }
      if (cVar1 != '\0') {
        pPVar5 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        if (*(code **)(*(long *)pPVar5 + 0x1f8) == Plant::IsInPlantFoodState) {
          cVar1 = Plant::IsInPlantFoodState(pPVar5);
        }
        else {
          cVar1 = (**(code **)(*(long *)pPVar5 + 0x1f8))();
        }
        if (cVar1 != '\0') {
          bVar6 = 1;
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
    bVar2 = bVar2 & (bVar6 ^ 1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* PlantGroup::IsFirstPlantInvincible() */

undefined8 __thiscall PlantGroup::IsFirstPlantInvincible(PlantGroup *this)

{
  char cVar1;
  undefined8 *puVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  Plant *this_01;
  undefined8 uVar3;
  
  cVar1 = Empty(this);
  if (cVar1 != '\0') {
    return 0;
  }
  puVar2 = (undefined8 *)Plants();
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03f3f378(*puVar2,0);
  this_01 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  uVar3 = Plant::IsInvincible(this_01,false);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::CanAttackRelocateGroup(BoardEntity const*) */

void __thiscall PlantGroup::CanAttackRelocateGroup(PlantGroup *this,BoardEntity *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  BoardEntity *pBVar4;
  RealObject *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar5;
  Plant *pPVar6;
  undefined1 uVar7;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Empty(this);
  if (cVar1 == '\0') {
    puVar3 = (undefined8 *)Plants();
    local_18 = FUN_03f3ffd8(*puVar3);
    local_10 = FUN_03f40028(puVar3[1]);
    uVar7 = 0;
    if (param_1 == (BoardEntity *)0x0) {
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
            bVar2) {
        pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        pPVar6 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
        cVar1 = BoardEntityPusher::CanPushPlant(pPVar6);
        if (cVar1 == '\0') goto LAB_03f41a20;
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
      }
    }
    else {
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
            bVar2) {
        pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        pPVar6 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
        cVar1 = BoardEntityPusher::CanPushPlant(pPVar6);
        if (cVar1 == '\0') goto LAB_03f41a20;
        cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)pRVar5);
        if (cVar1 != '\0') {
          pBVar4 = (BoardEntity *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
          cVar1 = Plant::CanBeTargetedBy(pBVar4);
          if (cVar1 == '\0') goto LAB_03f41a20;
          this_00 = (RealObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
          cVar1 = RealObject::IsOnOpposingTeam(this_00,(RealObject *)param_1);
          if (cVar1 == '\0') goto LAB_03f41a20;
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
      }
    }
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
LAB_03f41a20:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::calcCollisionRect() */

void __thiscall PlantGroup::calcCollisionRect(PlantGroup *this)

{
  char cVar1;
  bool bVar2;
  vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *this_00;
  long lVar3;
  RtMixedPtrBase *pRVar4;
  long *plVar5;
  undefined8 *puVar6;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  Insets *pIVar7;
  Insets *in_x8;
  undefined8 uVar8;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)Plants();
  cVar1 = std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::empty(this_00)
  ;
  if (cVar1 == '\0') {
    uVar8 = *(undefined8 *)this_00;
    lVar3 = FUN_03f3f35c(uVar8,*(undefined8 *)(this_00 + 8));
    if (lVar3 != 1) {
      Sexy::Insets::Insets((Insets *)&local_18);
      local_28 = FUN_03f3ffd8(*(undefined8 *)this_00);
      local_20 = FUN_03f40028(*(undefined8 *)(this_00 + 8));
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20),
            bVar2) {
        pRVar4 = (RtMixedPtrBase *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
        cVar1 = Sexy::RtMixedPtrBase::IsValid(pRVar4);
        if (cVar1 != '\0') {
          plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar4);
          puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x178))();
          local_18 = *puVar6;
          uStack_10 = puVar6[1];
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
      }
      Sexy::Insets::Insets(in_x8,(Insets *)&local_18);
      goto LAB_03f41c20;
    }
    pRVar4 = (RtMixedPtrBase *)FUN_03f3f378(uVar8,0);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(pRVar4);
    if (cVar1 != '\0') {
      this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03f3f378(*(undefined8 *)this_00,0);
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
      pIVar7 = (Insets *)(**(code **)(*plVar5 + 0x178))();
      Sexy::Insets::Insets(in_x8,pIVar7);
      goto LAB_03f41c20;
    }
  }
  Sexy::Insets::Insets(in_x8);
LAB_03f41c20:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::CanBeTargetedBy(BoardEntity const*, bool) */

void __thiscall PlantGroup::CanBeTargetedBy(PlantGroup *this,BoardEntity *param_1,bool param_2)

{
  undefined1 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  RtWeakPtr *this_00;
  long lVar6;
  Zombie *pZVar7;
  Plant *pPVar8;
  BoardEntity *pBVar9;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar5 = (undefined8 *)Plants();
  local_18 = FUN_03f3ffd8(*puVar5);
  local_10 = FUN_03f40028(puVar5[1]);
  do {
    uVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!(bool)uVar1) {
LAB_03f41ea0:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar1);
    }
    this_00 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar2) {
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      iVar4 = FUN_03f3f350(*(undefined4 *)(lVar6 + 0x230));
      if (iVar4 < 3) {
        if ((((param_2) && (param_1 != (BoardEntity *)0x0)) &&
            (pZVar7 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), pZVar7 != (Zombie *)0x0))
           && ((cVar3 = (**(code **)(*(long *)pZVar7 + 0x4d8))(), cVar3 != '\0' ||
               (cVar3 = (**(code **)(*(long *)pZVar7 + 0x508))(pZVar7), cVar3 != '\0')))) {
          pPVar8 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          cVar3 = Plant::IsInvincible(pPVar8,false);
          if (cVar3 == '\0') goto LAB_03f41ee0;
        }
        else {
LAB_03f41ee0:
          pPVar8 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          cVar3 = Plant::CanBeTargeted(pPVar8);
          if (cVar3 != '\0') {
            pBVar9 = (BoardEntity *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            uVar1 = Plant::CanBeTargetedBy(pBVar9);
            goto LAB_03f41ea0;
          }
        }
        uVar1 = 0;
        goto LAB_03f41ea0;
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::ApplyConditions(std::vector<PlantConditionEntry, std::allocator<PlantConditionEntry>
   >&, float) */

void __thiscall PlantGroup::ApplyConditions(PlantGroup *this,vector *param_1,float param_2)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 *puVar3;
  PlantGroup *pPVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)param_1);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    puVar3 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    uVar1 = *puVar3;
    pPVar4._0_4_ = (PlantGroup *)ValueRange::GetRandomValue((ValueRange *)(puVar3 + 1));
    ApplyCondition(pPVar4._0_4_,param_2,this,uVar1);
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGroup::PlantGroup() */

void __thiscall PlantGroup::PlantGroup(PlantGroup *this)

{
  BoardEntity::BoardEntity((BoardEntity *)this);
  this[0xac] = (PlantGroup)0x0;
  this[0xad] = (PlantGroup)0x0;
  *(undefined ***)this = &PTR_GetClass_06797790;
  *(undefined ***)(this + 0x10) = &PTR__PlantGroup_06797978;
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0xb0));
  FUN_03f3f3e4(this + 0x24);
  return;
}


/* PlantGroup::StaticNew() */

PlantGroup * PlantGroup::StaticNew(void)

{
  PlantGroup *this;
  
  this = ::operator_new(200);
  PlantGroup(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::DoAllPlantsMatchTypeList(std::vector<std::string, std::allocator<std::string > >
   const&, bool) */

void __thiscall PlantGroup::DoAllPlantsMatchTypeList(PlantGroup *this,vector *param_1,bool param_2)

{
  byte bVar1;
  bool bVar2;
  vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  byte bVar6;
  undefined8 local_30;
  undefined8 local_28;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar6 = 1;
  this_00 = (vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)Plants();
  bVar1 = std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::empty(this_00)
  ;
  bVar1 = bVar1 ^ 1;
  local_30 = FUN_03f3ffd8(*(undefined8 *)this_00);
  local_28 = FUN_03f40028(*(undefined8 *)(this_00 + 8));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar2) {
    this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    uVar3 = FUN_03f41ca0(*(undefined8 *)param_1);
    uVar4 = FUN_03f41cf0(*(undefined8 *)(param_1 + 8));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
    Plant::GetType();
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                         (uVar3,uVar4,lVar5 + 8);
    local_10 = FUN_03f41cf0(*(undefined8 *)(param_1 + 8));
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    if (bVar2) {
      bVar6 = 0;
    }
    else {
      bVar1 = 0;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  if (!param_2) {
    bVar1 = bVar6;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::ApplyPlantfood(bool) */

void __thiscall PlantGroup::ApplyPlantfood(PlantGroup *this,bool param_1)

{
  undefined *puVar1;
  bool bVar2;
  char cVar3;
  RiftThemeNoPlantfood *this_00;
  SoccerGameModule *this_01;
  undefined8 *puVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  Plant *pPVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_40;
  undefined8 local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  this_00 = RiftUtils::GetThemeByClass<RiftThemeNoPlantfood>();
  this_01 = (SoccerGameModule *)FUN_03f42204(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  puVar4 = (undefined8 *)Plants();
  local_40 = FUN_03f3ffd8(*puVar4);
  local_38 = FUN_03f40028(puVar4[1]);
  bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
  if (bVar2) {
    do {
      this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
      if (this_00 == (RiftThemeNoPlantfood *)0x0) {
LAB_03f426ac:
        bVar2 = true;
      }
      else {
        pPVar5 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
        cVar3 = RiftThemeNoPlantfood::CanApplyPlantfood(this_00,pPVar5);
        if (cVar3 != '\0') goto LAB_03f426ac;
        bVar2 = false;
      }
      if (this_01 != (SoccerGameModule *)0x0) {
        pPVar5 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
        cVar3 = SoccerGameModule::IsCarrier(this_01,pPVar5);
        if (cVar3 == '\0') {
          bVar2 = false;
        }
      }
      cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_02);
      if (cVar3 == '\0') {
LAB_03f425dc:
        cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_02);
        if (cVar3 != '\0') {
LAB_03f42690:
          uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
          cVar3 = Plant::HasCondition(uVar7,0x22);
          if (cVar3 != '\0') goto LAB_03f42610;
        }
        if (bVar2) {
          if ((param_1) &&
             (cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_02), cVar3 != '\0')) {
            lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
            cVar3 = FUN_03f3f6cc(*(undefined4 *)(lVar6 + 0x70));
            puVar1 = gMessageRouter;
            if (cVar3 == '\0') {
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
              Plant::GetType();
              lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
              FUN_05475d88(asStack_28,lVar6 + 8);
              MessageRouter::Broadcast<std::string_const&,std::string>
                        ((MessageRouter *)puVar1,Message::PlantfoodUsed,asStack_28);
              std::string::~string(asStack_28);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
            }
          }
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
          (**(code **)(**(long **)(lVar6 + 0xa8) + 0x220))(*(long **)(lVar6 + 0xa8));
        }
      }
      else {
        pPVar5 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
        cVar3 = Plant::CanApplyPlantfood(pPVar5);
        if (cVar3 != '\0') goto LAB_03f425dc;
        cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_02);
        if (cVar3 != '\0') {
          bVar2 = false;
          goto LAB_03f42690;
        }
      }
LAB_03f42610:
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
    } while (bVar2);
  }
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)avStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantGroup::~PlantGroup() */

void __thiscall PlantGroup::~PlantGroup(PlantGroup *this)

{
  *(undefined ***)this = &PTR_GetClass_06797790;
  *(undefined ***)(this + 0x10) = &PTR__PlantGroup_06797978;
  PlantsSortedByLayer::~PlantsSortedByLayer((PlantsSortedByLayer *)(this + 0xb0));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to PlantGroup::~PlantGroup() */

void __thiscall PlantGroup::~PlantGroup(PlantGroup *this)

{
  ~PlantGroup(this + -0x10);
  return;
}


/* PlantGroup::~PlantGroup() */

void __thiscall PlantGroup::~PlantGroup(PlantGroup *this)

{
  ~PlantGroup(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantGroup::~PlantGroup() */

void __thiscall PlantGroup::~PlantGroup(PlantGroup *this)

{
  ~PlantGroup(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::KillVulnerablePlants(DamageTypeFlags, BoardEntityHeight, bool, BoardEntity*) */

void __thiscall
PlantGroup::KillVulnerablePlants
          (undefined8 param_1,long param_2,int param_3,char param_4,long param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  vector *pvVar4;
  RtMixedPtrBase *this;
  Plant *pPVar5;
  long *plVar6;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar4 = (vector *)Plants();
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::vector
            (avStack_20,pvVar4);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    this = (RtMixedPtrBase *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30)
    ;
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this);
    if (cVar2 == '\0') {
LAB_03f42824:
      cVar2 = Sexy::RtMixedPtrBase::IsValid(this);
      if (cVar2 != '\0') {
        plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this);
        iVar3 = (**(code **)(*plVar6 + 0x180))();
        if (param_3 <= iVar3) {
          pPVar5 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)this);
          Plant::KillPlant(pPVar5,param_2 != 0,param_5 != 0,1);
        }
      }
    }
    else {
      pPVar5 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)this);
      cVar2 = Plant::IsInvincible(pPVar5,false);
      if (cVar2 == '\0') goto LAB_03f42824;
      if (param_4 != '\0') break;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::KillPlants(DamageTypeFlags, BoardEntityHeight) */

void __thiscall PlantGroup::KillPlants(undefined8 param_1,long param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  vector *pvVar4;
  RtMixedPtrBase *this;
  long *plVar5;
  Plant *pPVar6;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar4 = (vector *)Plants();
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::vector
            (avStack_20,pvVar4);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    this = (RtMixedPtrBase *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30)
    ;
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this);
    if (cVar2 != '\0') {
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this);
      iVar3 = (**(code **)(*plVar5 + 0x180))();
      if (param_3 <= iVar3) {
        pPVar6 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)this);
        Plant::KillPlant(pPVar6,param_2 != 0,0,1);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::RelocatePlantsOrKill() */

void __thiscall PlantGroup::RelocatePlantsOrKill(PlantGroup *this)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  vector *pvVar4;
  float *pfVar5;
  RtMixedPtrBase *this_00;
  undefined8 uVar6;
  Board *pBVar7;
  float fVar8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  int local_88;
  int local_84;
  Point aPStack_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  Point aPStack_68 [8];
  Insets aIStack_60 [16];
  float local_50 [6];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point((Point *)&local_88,0,0);
  Sexy::Point::Point(aPStack_80,*(int *)(this + 0xa4),*(int *)(this + 0xa8));
  Sexy::Insets::Insets(aIStack_60,-1,-1,0,0);
  pBVar7 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::Point::Point((Point *)local_50,(TPoint *)aPStack_80);
  pvVar4 = (vector *)Plants();
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::vector
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)&local_38,
             pvVar4);
  cVar1 = Board::TryGetValidRelocationPosition
                    (pBVar7,aIStack_60,(Point *)local_50,
                     (vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
                     &local_38,(Point *)&local_88);
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)&local_38);
  if (cVar1 == '\0') {
    KillPlants(this,0x80000000000,0);
  }
  else {
    fVar8 = (float)Distance2D((float)*(int *)(this + 0xa4),(float)*(int *)(this + 0xa8),
                              (float)local_88,(float)local_84);
    local_50[0] = fVar8 * 25.0 + 75.0;
    local_38 = 0x43480000;
    pfVar5 = eastl::min_alt<float>(local_50,(float *)&local_38);
    fVar8 = *pfVar5;
    std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::vector
              ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)local_50,
               pvVar4);
    local_78 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)local_50);
    local_70 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)local_50);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_78,(__normal_iterator *)&local_70), bVar2)
    {
      this_00 = (RtMixedPtrBase *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
      RelocationEvent::RelocationEvent((RelocationEvent *)&local_38);
      local_18 = 0;
      cVar3 = Sexy::RtMixedPtrBase::IsValid(this_00);
      if (cVar3 != '\0') {
        uVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        Sexy::Point::Point(aPStack_68,(TPoint *)&local_88);
        local_a0 = CONCAT44(uStack_14,local_18);
        local_c0 = CONCAT44(uStack_34,local_38);
        uStack_b8 = uStack_30;
        local_98 = local_10;
        local_b0 = local_28;
        uStack_a8 = uStack_20;
        Plant::StartRelocate((Plant *)0x3f800000,fVar8,uVar6,aPStack_68,&local_c0);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_78);
    }
    std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
              ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)local_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::TakeSmashAttack(BoardEntity*) */

void __thiscall PlantGroup::TakeSmashAttack(PlantGroup *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  vector *pvVar3;
  RtMixedPtrBase *this_00;
  Plant *pPVar4;
  Zombie *pZVar5;
  GridItem *pGVar6;
  undefined8 local_40;
  undefined8 local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar3 = (vector *)Plants();
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::vector
            (avStack_20,pvVar3);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
  if (bVar1) {
    do {
      this_00 = (RtMixedPtrBase *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
      cVar2 = Sexy::RtMixedPtrBase::IsValid(this_00);
      if (cVar2 != '\0') {
        pPVar4 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        cVar2 = Plant::AbsorbsSmashAttack(pPVar4);
        if (param_1 != (BoardEntity *)0x0) {
          pZVar5 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
          if (pZVar5 == (Zombie *)0x0) {
            pGVar6 = Sexy::RtObject::Cast<GridItem>((RtObject *)param_1);
            if (pGVar6 != (GridItem *)0x0) {
              pPVar4 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                          ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
              ToolPacketData::GetProps();
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        (aRStack_28,(RtWeakPtrBase *)aRStack_30);
              Plant::TakeGridItemSmashAttack(pPVar4,aRStack_28);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
            }
          }
          else {
            pPVar4 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                        ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_30);
            Plant::TakeSmashAttack(pPVar4,aRStack_28);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
          }
        }
        if (cVar2 != '\0') break;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
    } while (bVar1);
  }
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::TakeFatalDamage(DamageInfo const&) */

void __thiscall PlantGroup::TakeFatalDamage(PlantGroup *this,DamageInfo *param_1)

{
  bool bVar1;
  char cVar2;
  vector *pvVar3;
  RtMixedPtrBase *this_00;
  long *plVar4;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar3 = (vector *)Plants();
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::vector
            (avStack_20,pvVar3);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    this_00 = (RtMixedPtrBase *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar2 != '\0') {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      (**(code **)(*plVar4 + 0x120))(plVar4,param_1);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::HealByAmount(float) */

void PlantGroup::HealByAmount(float param_1)

{
  bool bVar1;
  char cVar2;
  vector *pvVar3;
  RtMixedPtrBase *this;
  long *plVar4;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar3 = (vector *)Plants();
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::vector
            (avStack_20,pvVar3);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    this = (RtMixedPtrBase *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30)
    ;
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this);
    if (cVar2 != '\0') {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this);
      (**(code **)(*plVar4 + 0x148))(param_1);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::HasAnyRestrictionSetInclusion(PlantRestrictionSet const&) const */

void __thiscall
PlantGroup::HasAnyRestrictionSetInclusion(PlantGroup *this,PlantRestrictionSet *param_1)

{
  byte bVar1;
  bool bVar2;
  vector *pvVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  byte bVar4;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> avStack_20 [24];
  long local_8;
  
  bVar4 = 0;
  local_8 = ___stack_chk_guard;
  pvVar3 = (vector *)Plants();
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::vector
            (avStack_20,pvVar3);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar2) {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    bVar1 = PlantRestrictionSet::IsIncluded((Plant *)param_1);
    bVar4 = bVar1 | bVar4;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::GatherPlantingRestrictions(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
PlantGroup::GatherPlantingRestrictions
          (PlantGroup *this,Point *param_1,PlantType *param_2,vector *param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  undefined8 *puVar8;
  RtWeakPtrBase *pRVar9;
  ResourceInfo *pRVar10;
  Plant *pPVar11;
  long lVar12;
  undefined8 uVar13;
  RtObject *this_00;
  PlantPrimalWallnut *pPVar14;
  code *pcVar15;
  Board *this_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar6 = PlantType::GetProps(param_2);
  cVar2 = std::vector<PlantingReason,std::allocator<PlantingReason>>::empty
                    ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3);
  if (cVar2 == '\0') {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)param_3);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_3);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar3)
    {
      piVar7 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      if (*piVar7 == 0x4e) {
        std::vector<PlantingReason,std::allocator<PlantingReason>>::clear
                  ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3);
        local_20 = CONCAT44(local_20._4_4_,0x33);
        std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                  ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
                   (PlantingReason *)&local_20);
        goto LAB_03f43cb4;
      }
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_18);
    }
  }
  puVar8 = (undefined8 *)Plants();
  cVar2 = Empty(this);
  if (cVar2 != '\0') {
    iVar1 = *(int *)param_1;
    iVar5 = *(int *)(param_1 + 4);
    this_01 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string((string *)&local_10,"");
    pPVar11 = (Plant *)Board::GetPlantAt(this_01,iVar1 + -1,iVar5,(string *)&local_10);
    std::string::~string((string *)&local_10);
    nop();
    if (pPVar11 != (Plant *)0x0) {
      Plant::GetType();
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      bVar3 = std::operator==("cobcannon",(string *)(lVar12 + 8));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      if ((bVar3) && (cVar2 = Plant::IsIceblocked(pPVar11), cVar2 != '\0')) {
        local_10 = CONCAT44(local_10._4_4_,0x13);
        std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                  ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
                   (PlantingReason *)&local_10);
      }
    }
  }
  bVar3 = false;
  local_20 = FUN_03f3ffd8(*puVar8);
  local_18 = FUN_03f40028(puVar8[1]);
  do {
    bVar4 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_18);
    if (!bVar4) {
      if (bVar3) {
        local_10 = CONCAT44(local_10._4_4_,0x4d);
        std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                  ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
                   (PlantingReason *)&local_10);
      }
LAB_03f43cb4:
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    pRVar9 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_28,pRVar9);
    pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_28);
    if (pRVar10 != (ResourceInfo *)0x0) {
      bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_28);
      if (bVar4) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
        Plant::GetType();
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
        bVar4 = std::operator!=((string *)(lVar12 + 8),"primalwallnut");
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
        if (bVar4) {
          this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
          pPVar14 = Sexy::RtObject::Cast<PlantPrimalWallnut>(this_00);
          if ((pPVar14 != (PlantPrimalWallnut *)0x0) &&
             (cVar2 = FUN_03f3f358(pPVar14[0x30]), cVar2 != '\0')) {
            local_10 = CONCAT44(local_10._4_4_,0x4d);
            std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                      ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
                       (PlantingReason *)&local_10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
            goto LAB_03f43cb4;
          }
        }
      }
      pPVar11 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      cVar2 = Plant::IsConvertedByCondition(pPVar11);
      if (cVar2 != '\0') {
        pcVar15 = *(code **)(*(long *)param_2 + 0x88);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)aRStack_28);
        cVar2 = (*pcVar15)(param_2,(RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
        if (cVar2 == '\0') {
          pPVar11 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
          cVar2 = Plant::IsIceblocked(pPVar11);
          if (cVar2 != '\0') {
            local_10 = CONCAT44(local_10._4_4_,0x13);
            std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                      ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
                       (PlantingReason *)&local_10);
          }
        }
      }
      iVar1 = *(int *)(lVar6 + 0xbc);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      Plant::GetProps();
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      if (iVar1 != *(int *)(lVar12 + 0xbc)) {
        iVar1 = *(int *)(lVar6 + 0xbc);
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
        iVar5 = FUN_03f3f350(*(undefined4 *)(lVar12 + 0x230));
        if (iVar1 != iVar5) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
          goto LAB_03f43b80;
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      pcVar15 = *(code **)(*(long *)param_2 + 0x90);
      uVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      cVar2 = (*pcVar15)(param_2,uVar13);
      if (cVar2 == '\0') {
        bVar3 = true;
      }
    }
LAB_03f43b80:
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::AddPlant(Sexy::RtWeakPtr<Plant>) */

void __thiscall PlantGroup::AddPlant(PlantGroup *this,RtWeakPtrBase *param_2)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  PlantsSortedByLayer::AddPlant((PlantsSortedByLayer *)(this + 0xb0),aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  BoardEntity::invalidateCollisionRect((BoardEntity *)this);
  fixFrost();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroup::RemovePlant(Sexy::RtWeakPtr<Plant>) */

void __thiscall PlantGroup::RemovePlant(PlantGroup *this,RtWeakPtrBase *param_2)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  PlantsSortedByLayer::RemovePlant((PlantsSortedByLayer *)(this + 0xb0),aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  BoardEntity::invalidateCollisionRect((BoardEntity *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGroup::SetNewCollisionRect() */

void __thiscall PlantGroup::SetNewCollisionRect(PlantGroup *this)

{
  BoardEntity::invalidateCollisionRect((BoardEntity *)this);
  (**(code **)(*(long *)this + 0x178))(this);
  return;
}

