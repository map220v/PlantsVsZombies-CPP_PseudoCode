// Class: PlantMoonFlower


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMoonFlower::StaticClassInit() */

void PlantMoonFlower::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantMoonFlower");
    (*pcVar2)(plVar1,asStack_10,FUN_0404d178,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMoonFlower::StaticGetClass() */

long * PlantMoonFlower::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantMoonFlower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantMoonFlower::GetClass() const */

long * PlantMoonFlower::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantMoonFlower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantMoonFlower::isAvatarShieldAlreadyShow() const */

PlantMoonFlower __thiscall PlantMoonFlower::isAvatarShieldAlreadyShow(PlantMoonFlower *this)

{
  char cVar1;
  PlantMoonFlower PVar2;
  
  cVar1 = std::
          vector<Sexy::RtWeakPtr<GridItemInfinutShieldSegment>,std::allocator<Sexy::RtWeakPtr<GridItemInfinutShieldSegment>>>
          ::empty((vector<Sexy::RtWeakPtr<GridItemInfinutShieldSegment>,std::allocator<Sexy::RtWeakPtr<GridItemInfinutShieldSegment>>>
                   *)(this + 0x38));
  PVar2 = (PlantMoonFlower)0x0;
  if (cVar1 == '\0') {
    PVar2 = this[0x50];
  }
  return PVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMoonFlower::avatarSkillShieldHeal() const */

void __thiscall PlantMoonFlower::avatarSkillShieldHeal(PlantMoonFlower *this)

{
  bool bVar1;
  char cVar2;
  RtMixedPtrBase *this_00;
  long *plVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_0404c064(*(undefined8 *)(this + 0x38));
  local_10 = FUN_0404c0b4(*(undefined8 *)(this + 0x40));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this_00 = (RtMixedPtrBase *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar2 != '\0') {
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      (**(code **)(*plVar3 + 0x2a8))();
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
/* PlantMoonFlower::isAllFullHealth() const */

void __thiscall PlantMoonFlower::isAllFullHealth(PlantMoonFlower *this)

{
  char cVar1;
  bool bVar2;
  RtMixedPtrBase *this_00;
  GridItemBreakableTarget *this_01;
  undefined1 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::
          vector<Sexy::RtWeakPtr<GridItemInfinutShieldSegment>,std::allocator<Sexy::RtWeakPtr<GridItemInfinutShieldSegment>>>
          ::empty((vector<Sexy::RtWeakPtr<GridItemInfinutShieldSegment>,std::allocator<Sexy::RtWeakPtr<GridItemInfinutShieldSegment>>>
                   *)(this + 0x38));
  if (cVar1 == '\0') {
    local_18 = FUN_0404c064(*(undefined8 *)(this + 0x38));
    local_10 = FUN_0404c0b4(*(undefined8 *)(this + 0x40));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2)
    {
      this_00 = (RtMixedPtrBase *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
      uVar3 = 0;
      if (cVar1 == '\0') goto LAB_0404c298;
      this_01 = (GridItemBreakableTarget *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      cVar1 = GridItemBreakableTarget::IsHealthFull(this_01);
      if (cVar1 == '\0') goto LAB_0404c298;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
LAB_0404c298:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* PlantMoonFlower::CanApplyPlantfood() */

byte __thiscall PlantMoonFlower::CanApplyPlantfood(PlantMoonFlower *this)

{
  byte bVar1;
  
  bVar1 = isAllFullHealth(this);
  return bVar1 ^ 1;
}


/* PlantMoonFlower::PlantMoonFlower() */

void __thiscall PlantMoonFlower::PlantMoonFlower(PlantMoonFlower *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067beed0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  this[0x50] = (PlantMoonFlower)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantPlaced);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<PlantMoonFlower,void(PlantMoonFlower::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantPlaced,&local_40);
  return;
}


/* PlantMoonFlower::StaticNew() */

PlantMoonFlower * PlantMoonFlower::StaticNew(void)

{
  PlantMoonFlower *this;
  
  this = ::operator_new(0x60);
  PlantMoonFlower(this);
  return this;
}


/* PlantMoonFlower::GetMoonBoostRadius() */

undefined4 __thiscall PlantMoonFlower::GetMoonBoostRadius(PlantMoonFlower *this)

{
  long lVar1;
  
  lVar1 = FUN_0404c94c(*(undefined8 *)(this + 0x10));
  return *(undefined4 *)(lVar1 + 0x2b8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMoonFlower::calcNumBoostedPlants() */

void __thiscall PlantMoonFlower::calcNumBoostedPlants(PlantMoonFlower *this)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  Plant *this_00;
  long *plVar4;
  int iVar5;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_0404c94c(*(undefined8 *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x28));
  if (bVar1) {
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
    (**(code **)(*plVar4 + 0x98))(plVar4,avStack_20);
  }
  iVar5 = -1;
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
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    nop();
    cVar2 = PlantRestrictionSet::IsIncluded((Plant *)(lVar3 + 0x368));
    if ((cVar2 != '\0') && (cVar2 = Plant::IsSuspended(this_00), cVar2 == '\0')) {
      iVar5 = iVar5 + 1;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar5);
  }
  return;
}


/* PlantMoonFlower::~PlantMoonFlower() */

void __thiscall PlantMoonFlower::~PlantMoonFlower(PlantMoonFlower *this)

{
  *(undefined ***)this = &PTR_GetClass_067beed0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::
  vector<Sexy::RtWeakPtr<GridItemInfinutShieldSegment>,std::allocator<Sexy::RtWeakPtr<GridItemInfinutShieldSegment>>>
  ::~vector((vector<Sexy::RtWeakPtr<GridItemInfinutShieldSegment>,std::allocator<Sexy::RtWeakPtr<GridItemInfinutShieldSegment>>>
             *)(this + 0x38));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantMoonFlower::~PlantMoonFlower() */

void __thiscall PlantMoonFlower::~PlantMoonFlower(PlantMoonFlower *this)

{
  ~PlantMoonFlower(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMoonFlower::removeShield() */

void __thiscall PlantMoonFlower::removeShield(PlantMoonFlower *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  RtMixedPtrBase *this_01;
  long *plVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x38);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this_01 = (RtMixedPtrBase *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this_01);
    if (cVar2 != '\0') {
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      (**(code **)(*plVar3 + 0x48))();
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::
  vector<Sexy::RtWeakPtr<GridItemInfinutShieldSegment>,std::allocator<Sexy::RtWeakPtr<GridItemInfinutShieldSegment>>>
  ::clear((vector<Sexy::RtWeakPtr<GridItemInfinutShieldSegment>,std::allocator<Sexy::RtWeakPtr<GridItemInfinutShieldSegment>>>
           *)this_00);
  this[0x50] = (PlantMoonFlower)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMoonFlower::getSunProduction() */

void PlantMoonFlower::getSunProduction(void)

{
  int iVar1;
  PlantMoonFlower *in_x0;
  long lVar2;
  long lVar3;
  RtObject *this;
  PowerPropsSunProducer *pPVar4;
  int *piVar5;
  PowerPropsSunProducer *in_x8;
  int local_28 [2];
  PowerSet aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_0404c94c(*(undefined8 *)(in_x0 + 0x10));
  FUN_0404ae74((RtWeakPtr<Sexy::ResourceInfo> *)local_28,*(undefined8 *)(in_x0 + 0x10));
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
  PowerSet::PowerSet(aPStack_20,(PowerSet *)(lVar3 + 0x58));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
  PowerSet::Find((RtWeakPtr<Sexy::ResourceInfo> *)local_28,aPStack_20,1);
  this = (RtObject *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
  pPVar4 = Sexy::RtObject::Cast<PowerPropsSunProducer>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
  PowerPropsSunProducer::PowerPropsSunProducer(in_x8,pPVar4);
  iVar1 = calcNumBoostedPlants(in_x0);
  local_28[0] = *(int *)(in_x8 + 0x18) + iVar1 * *(int *)(lVar2 + 0x358);
  piVar5 = eastl::min_alt<int>(local_28,(int *)(lVar2 + 0x35c));
  *(int *)(in_x8 + 0x18) = *piVar5;
  PowerSet::~PowerSet(aPStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMoonFlower::getPerSunProduction() */

void PlantMoonFlower::getPerSunProduction(void)

{
  long in_x0;
  long lVar1;
  long lVar2;
  RtObject *this;
  PowerPropsSunProducer *pPVar3;
  PowerPropsSunProducer *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  PowerSet aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_0404c94c(*(undefined8 *)(in_x0 + 0x10));
  FUN_0404ae74(aRStack_28,*(undefined8 *)(in_x0 + 0x10));
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  PowerSet::PowerSet(aPStack_20,(PowerSet *)(lVar2 + 0x58));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  PowerSet::Find(aRStack_28,aPStack_20,1);
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  pPVar3 = Sexy::RtObject::Cast<PowerPropsSunProducer>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  PowerPropsSunProducer::PowerPropsSunProducer(in_x8,pPVar3);
  *(undefined4 *)(in_x8 + 0x18) = *(undefined4 *)(lVar1 + 0x358);
  PowerSet::~PowerSet(aPStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMoonFlower::getPlantFoodSunProduction() */

void PlantMoonFlower::getPlantFoodSunProduction(void)

{
  long in_x0;
  long lVar1;
  long lVar2;
  RtObject *this;
  PowerPropsSunProducer *pPVar3;
  PowerPropsSunProducer *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  PowerSet aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_0404c94c(*(undefined8 *)(in_x0 + 0x10));
  FUN_0404ae74(aRStack_28,*(undefined8 *)(in_x0 + 0x10));
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  PowerSet::PowerSet(aPStack_20,(PowerSet *)(lVar2 + 0x58));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  PowerSet::Find(aRStack_28,aPStack_20,1);
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  pPVar3 = Sexy::RtObject::Cast<PowerPropsSunProducer>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  PowerPropsSunProducer::PowerPropsSunProducer(in_x8,pPVar3);
  *(int *)(in_x8 + 0x18) = *(int *)(lVar1 + 0x358) << 2;
  PowerSet::~PowerSet(aPStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMoonFlower::avatarSkillAddShield(bool) */

void __thiscall PlantMoonFlower::avatarSkillAddShield(PlantMoonFlower *this,bool param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  DamageInfoProps *this_00;
  ulong uVar4;
  RtWeakPtr *this_01;
  RtMixedPtrBase *this_02;
  RtWeakPtr<Sexy::ResourceInfo> *this_03;
  GridItem *this_04;
  int iVar5;
  Board *pBVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int local_28;
  int local_24;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  string asStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  iVar5 = 0;
  this_00 = (DamageInfoProps *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30))
  ;
  fVar11 = (float)DamageInfoProps::GetBaseDamage(this_00);
  fVar13 = ((float)local_24 + 0.5) - fVar11;
  if (fVar13 <= (float)local_24 + -0.5 + fVar11) {
    do {
      if (((0.0 <= fVar13) && (iVar3 = BoardConstants::NUMBER_OF_ROWS(), fVar13 < (float)iVar3)) &&
         (fVar12 = ((float)local_28 + 0.5) - fVar11, fVar12 <= (float)local_28 + -0.5 + fVar11)) {
        do {
          if ((0.0 <= fVar12) &&
             (iVar3 = BoardConstants::NUMBER_OF_COLUMNS(), fVar12 < (float)iVar3)) {
            uVar9 = (uint)fVar12;
            uVar8 = (uint)fVar13;
            pBVar6 = *(Board **)(gLawnApp + 0x9f0);
            Sexy::Point::Point(aPStack_10,uVar9,uVar8);
            cVar1 = Board::IsPitOfDoom(pBVar6,aPStack_10);
            if (cVar1 == '\0') {
              cVar1 = isAvatarShieldAlreadyShow(this);
              if (cVar1 == '\0') {
                if (!param_1) {
                  pBVar6 = *(Board **)(gLawnApp + 0x9f0);
                  std::string::string(asStack_18,"moonflowershield");
                  Board::AddGridItem(pBVar6,asStack_18,uVar9,uVar8,1);
                  ToolPacketData::GetProps();
                  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                            (aRStack_20,(RtWeakPtrBase *)aPStack_10);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_10);
                  std::string::~string(asStack_18);
                  nop();
                  std::
                  vector<Sexy::RtWeakPtr<GridItemInfinutShieldSegment>,std::allocator<Sexy::RtWeakPtr<GridItemInfinutShieldSegment>>>
                  ::push_back((vector<Sexy::RtWeakPtr<GridItemInfinutShieldSegment>,std::allocator<Sexy::RtWeakPtr<GridItemInfinutShieldSegment>>>
                               *)(this + 0x38),(RtWeakPtr *)aRStack_20);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
                }
              }
              else {
                uVar7 = *(undefined8 *)(this + 0x38);
                uVar10 = (ulong)iVar5;
                uVar4 = FUN_0404aecc(uVar7,*(undefined8 *)(this + 0x40));
                if (uVar10 < uVar4) {
                  this_01 = (RtWeakPtr *)FUN_0404aec4(uVar7,uVar10);
                  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
                  if (bVar2) {
                    this_02 = (RtMixedPtrBase *)FUN_0404aec4(*(undefined8 *)(this + 0x38),uVar10);
                    cVar1 = Sexy::RtMixedPtrBase::IsValid(this_02);
                    if (cVar1 != '\0') {
                      this_03 = (RtWeakPtr<Sexy::ResourceInfo> *)
                                FUN_0404aec4(*(undefined8 *)(this + 0x38),uVar10);
                      this_04 = (GridItem *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_03);
                      GridItem::SetGridLocation(this_04,uVar9,uVar8);
                    }
                  }
                }
              }
              iVar5 = iVar5 + 1;
              Sexy::OutputDebugStrF((wchar_t *)"Adding glow: (%d, %d)\n",(ulong)uVar9,(ulong)uVar8);
            }
          }
          fVar12 = fVar12 + 1.0;
        } while (fVar12 <= (float)local_28 + -0.5 + fVar11);
      }
      fVar13 = fVar13 + 1.0;
    } while (fVar13 <= (float)local_24 + -0.5 + fVar11);
  }
  this[0x50] = (PlantMoonFlower)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMoonFlower::CancelPlantfood() */

void __thiscall PlantMoonFlower::CancelPlantfood(PlantMoonFlower *this)

{
  byte bVar1;
  char cVar2;
  RtMixedPtrBase *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long *plVar3;
  Board *this_02;
  int local_28;
  int local_24;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  if (this[8] != (PlantMoonFlower)0x0) {
    bVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    Sexy::OutputDebugStrF((wchar_t *)"Adding GetAvatarEnable() is %d \n",(ulong)bVar1);
    cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    if (cVar2 == '\0') {
      cVar2 = std::
              vector<Sexy::RtWeakPtr<GridItemInfinutShieldSegment>,std::allocator<Sexy::RtWeakPtr<GridItemInfinutShieldSegment>>>
              ::empty((vector<Sexy::RtWeakPtr<GridItemInfinutShieldSegment>,std::allocator<Sexy::RtWeakPtr<GridItemInfinutShieldSegment>>>
                       *)(this + 0x38));
      if (cVar2 == '\0') {
        this_00 = (RtMixedPtrBase *)FUN_0404aec4(*(undefined8 *)(this + 0x38),0);
        cVar2 = Sexy::RtMixedPtrBase::IsValid(this_00);
        if (cVar2 != '\0') {
          this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0404aec4(*(undefined8 *)(this + 0x38),0);
          plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
          (**(code **)(*plVar3 + 0x2a8))();
          goto LAB_0404df48;
        }
      }
      BoardEntity::CalcGridPosition();
      this_02 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string(asStack_18,"moonflowershield");
      Board::AddGridItem(this_02,asStack_18,local_28,local_24,1);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      std::string::~string(asStack_18);
      nop();
      std::
      vector<Sexy::RtWeakPtr<GridItemInfinutShieldSegment>,std::allocator<Sexy::RtWeakPtr<GridItemInfinutShieldSegment>>>
      ::push_back((vector<Sexy::RtWeakPtr<GridItemInfinutShieldSegment>,std::allocator<Sexy::RtWeakPtr<GridItemInfinutShieldSegment>>>
                   *)(this + 0x38),(RtWeakPtr *)aRStack_20);
      this[0x50] = (PlantMoonFlower)0x1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    }
    else {
      cVar2 = isAvatarShieldAlreadyShow(this);
      if (cVar2 == '\0') {
        avatarSkillAddShield(this,false);
      }
      else {
        removeShield(this);
        avatarSkillAddShield(this,false);
      }
    }
  }
LAB_0404df48:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMoonFlower::OnRelocationComplete() */

void __thiscall PlantMoonFlower::OnRelocationComplete(PlantMoonFlower *this)

{
  bool bVar1;
  char cVar2;
  MoonFlowerPoweredTilesSubsystem *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x30));
  if ((bVar1) && (cVar2 = Plant::IsOnBoard(*(Plant **)(this + 0x10)), cVar2 != '\0')) {
    this_00 = (MoonFlowerPoweredTilesSubsystem *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
    MoonFlowerPoweredTilesSubsystem::AddGlowEffects(this_00,*(Plant **)(this + 0x10));
    return;
  }
  return;
}


/* PlantMoonFlower::onApplyCondition(PlantConditions) */

void __thiscall PlantMoonFlower::onApplyCondition(PlantMoonFlower *this,int param_2)

{
  bool bVar1;
  MoonFlowerPoweredTilesSubsystem *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x30));
  if (bVar1) {
    this_00 = (MoonFlowerPoweredTilesSubsystem *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
    MoonFlowerPoweredTilesSubsystem::UpdateGlowEffects(this_00,*(Plant **)(this + 0x10));
  }
  if ((param_2 != 2 && param_2 != 0x17) && (param_2 != 0x1d)) {
    return;
  }
  removeShield(this);
  return;
}


/* PlantMoonFlower::onEndCondition(PlantConditions) */

void PlantMoonFlower::onEndCondition(long param_1)

{
  char cVar1;
  MoonFlowerPoweredTilesSubsystem *this;
  
  cVar1 = Board::IsLevelEnded(*(Board **)(gLawnApp + 0x9f0));
  if (cVar1 != '\0') {
    return;
  }
  this = (MoonFlowerPoweredTilesSubsystem *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x30))
  ;
  MoonFlowerPoweredTilesSubsystem::UpdateGlowEffects(this,*(Plant **)(param_1 + 0x10));
  return;
}


/* PlantMoonFlower::OnRelocationBegun() */

void __thiscall PlantMoonFlower::OnRelocationBegun(PlantMoonFlower *this)

{
  bool bVar1;
  MoonFlowerPoweredTilesSubsystem *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x30));
  if (!bVar1) {
    return;
  }
  this_00 = (MoonFlowerPoweredTilesSubsystem *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30))
  ;
  MoonFlowerPoweredTilesSubsystem::RemoveGlowEffects(this_00,(Plant *)0x0);
  return;
}


/* PlantMoonFlower::onKilled(bool) */

void PlantMoonFlower::onKilled(bool param_1)

{
  RtWeakPtr *this;
  bool bVar1;
  MoonFlowerPoweredTilesSubsystem *this_00;
  
  this = (RtWeakPtr *)((PlantMoonFlower *)(ulong)param_1 + 0x30);
  removeShield((PlantMoonFlower *)(ulong)param_1);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
  if (!bVar1) {
    return;
  }
  this_00 = (MoonFlowerPoweredTilesSubsystem *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  MoonFlowerPoweredTilesSubsystem::RemoveGlowEffects(this_00,(Plant *)0x0);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0404edcc */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantMoonFlower::Initialize() */

void __thiscall PlantMoonFlower::Initialize(PlantMoonFlower *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  undefined4 uVar1;
  char cVar2;
  long lVar3;
  BoardEntity *this_01;
  ComponentConditionRadius *this_02;
  PlantPhatBeetTossSystem *this_03;
  MoonFlowerPoweredTilesSubsystem *this_04;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_c0 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_b8 [8];
  string asStack_b0 [8];
  float local_a8 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  lVar3 = FUN_0404c94c(*(undefined8 *)(this + 0x10));
  this_01 = *(BoardEntity **)(this + 0x10);
  BoardEntity::GetComponentRunner(this_01);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_b8,(RtWeakPtrBase *)aRStack_c0);
  std::string::string(asStack_b0,"BoostRadius");
  ComponentRunner::Add<ComponentConditionRadius>((ComponentRunner *)this_01,aRStack_b8,asStack_b0);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x28),(RtWeakPtrBase *)local_a8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_a8);
  std::string::~string(asStack_b0);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_c0);
  this_02 = (ComponentConditionRadius *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
  ;
  ComponentConditionRadius::SetRadiusProps(this_02,(ComponentConditionRadiusProps *)(lVar3 + 0x2b8))
  ;
  cVar2 = Plant::IsOnBoard(*(Plant **)(this + 0x10));
  if (cVar2 != '\0') {
    this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x30);
    uVar1 = *(undefined4 *)(*(long *)(this + 0x10) + 0x110);
    *(undefined4 *)(this + 0x58) = *(undefined4 *)(*(long *)(this + 0x10) + 0x114);
    *(undefined4 *)(this + 0x54) = uVar1;
    Board::GetGameSubSystem<MoonFlowerPoweredTilesSubsystem>(*(Board **)(gLawnApp + 0x9f0));
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)local_a8);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_a8);
    ComponentConditionRadiusProps::ComponentConditionRadiusProps
              ((ComponentConditionRadiusProps *)local_a8,
               (ComponentConditionRadiusProps *)(lVar3 + 0x2b8));
    this_03 = (PlantPhatBeetTossSystem *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    PlantPhatBeetTossSystem::setStunTime(this_03,local_a8[0]);
    this_04 = (MoonFlowerPoweredTilesSubsystem *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    MoonFlowerPoweredTilesSubsystem::AddGlowEffects(this_04,*(Plant **)(this + 0x10));
    (**(code **)(*(long *)this + 0x168))(this);
    ComponentConditionRadiusProps::~ComponentConditionRadiusProps
              ((ComponentConditionRadiusProps *)local_a8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMoonFlower::ProduceSun(PlantAction const&) */

void __thiscall PlantMoonFlower::ProduceSun(PlantMoonFlower *this,PlantAction *param_1)

{
  char cVar1;
  undefined8 uVar2;
  code *pcVar3;
  PowerPropsSunProducer aPStack_48 [32];
  SunProducer aSStack_28 [32];
  long local_8;
  
  pcVar3 = *(code **)(*(long *)*(Plant **)(this + 0x10) + 0x1f8);
  local_8 = ___stack_chk_guard;
  if (pcVar3 == Plant::IsInPlantFoodState) {
    cVar1 = Plant::IsInPlantFoodState(*(Plant **)(this + 0x10));
  }
  else {
    cVar1 = (*pcVar3)();
  }
  if (cVar1 == '\0') {
    uVar2 = *(undefined8 *)(this + 0x10);
    getSunProduction();
                    /* WARNING: Load size is inaccurate */
    SunProducer::SunProducer
              (*(SunProducer **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c),aSStack_28,uVar2,
               aPStack_48);
    SunProducer::Execute(aSStack_28);
    PowerPropsSunProducer::~PowerPropsSunProducer(aPStack_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMoonFlower::getCurrentLayerSetName() */

void PlantMoonFlower::getCurrentLayerSetName(void)

{
  int iVar1;
  long in_x0;
  long lVar2;
  PowerPropsSunProducer aPStack_28 [24];
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getSunProduction();
  lVar2 = FUN_0404c94c(*(undefined8 *)(in_x0 + 0x10));
  iVar1 = *(int *)(lVar2 + 0x35c);
  PowerPropsSunProducer::~PowerPropsSunProducer(aPStack_28);
  if (local_10 < iVar1) {
    FUN_05475d88();
  }
  else {
    FUN_05475d88();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMoonFlower::UpdateActions() */

void __thiscall PlantMoonFlower::UpdateActions(PlantMoonFlower *this)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  PopAnimRig *pPVar4;
  Plant *this_00;
  string asStack_58 [24];
  int local_40;
  DummyInit aDStack_38 [48];
  long local_8;
  
  lVar2 = *(long *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if (*(int *)(lVar2 + 200) == 4) {
    cVar1 = PVZ_IS_IT(*(float *)(lVar2 + 300));
    if ((cVar1 == '\0') || (cVar1 = SunProducer::CanProduceSun(), cVar1 == '\0')) {
      lVar2 = *(long *)(this + 0x10);
    }
    else {
      pPVar4 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string(asStack_58,"special");
      Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
      PopAnimRig::PlayAndStop(pPVar4,asStack_58,0,aDStack_38);
      std::string::~string(asStack_58);
      nop();
      Plant::ResetLaunchTimer(*(Plant **)(this + 0x10),false);
      lVar2 = *(long *)(this + 0x10);
    }
  }
  uVar3 = FUN_0404cc08(lVar2);
  getCurrentLayerSetName();
  PlantAnimRig_DragonBabyBruit::ShowBoostedLayerSet(uVar3,asStack_58);
  std::string::~string(asStack_58);
  this_00 = *(Plant **)(this + 0x10);
  getSunProduction();
  lVar2 = FUN_0404c94c(*(undefined8 *)(this + 0x10));
  Plant::setShowShadowBoost(this_00,*(int *)(lVar2 + 0x35c) <= local_40);
  PowerPropsSunProducer::~PowerPropsSunProducer((PowerPropsSunProducer *)asStack_58);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMoonFlower::skillProduceSun() */

void __thiscall PlantMoonFlower::skillProduceSun(PlantMoonFlower *this)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  PowerPropsSunProducer aPStack_48 [32];
  SunProducer aSStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_0404c94c(*(undefined8 *)(this + 0x10));
  iVar1 = FUN_0404ae98(*(undefined8 *)(this + 0x10));
  if (iVar1 == 2) {
    iVar1 = PlantFramework::Rand((PlantFramework *)this);
    if (*(float *)(lVar2 + 0x360) < (float)iVar1 * _FUN_0404f2d4) goto LAB_0404f200;
  }
  else if ((iVar1 < 3) ||
          (iVar1 = PlantFramework::Rand((PlantFramework *)this),
          *(float *)(lVar2 + 0x360) + *(float *)(lVar2 + 0x360) < (float)iVar1 * _FUN_0404f2d4))
  goto LAB_0404f200;
  uVar3 = *(undefined8 *)(this + 0x10);
  getPerSunProduction();
  lVar2 = FUN_0404c94c(*(undefined8 *)(this + 0x10));
  lVar2 = FUN_0404b09c(*(undefined8 *)(lVar2 + 0x70));
                    /* WARNING: Load size is inaccurate */
  SunProducer::SunProducer
            (*(SunProducer **)(lVar2 + 0x68),*(undefined4 *)(lVar2 + 0x6c),aSStack_28,uVar3,
             aPStack_48);
  SunProducer::Execute(aSStack_28);
  PowerPropsSunProducer::~PowerPropsSunProducer(aPStack_48);
LAB_0404f200:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMoonFlower::onPlantPlaced(Plant*) */

void __thiscall PlantMoonFlower::onPlantPlaced(PlantMoonFlower *this,Plant *param_1)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  Plant *this_00;
  long lVar4;
  Plant *extraout_x0;
  long *plVar5;
  RtMixedPtrBase *this_01;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  GridItem *this_03;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  this_00 = *(Plant **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if (this_00 == param_1) {
    cVar2 = Plant::IsOnBoardGrid(this_00);
    if (cVar2 == '\0') {
      this_00 = *(Plant **)(this + 0x10);
    }
    else {
      cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
      if (cVar2 == '\0') {
        cVar2 = isAvatarShieldAlreadyShow(this);
        if (cVar2 != '\0') {
          this_01 = (RtMixedPtrBase *)FUN_0404aec4(*(undefined8 *)(this + 0x38),0);
          cVar2 = Sexy::RtMixedPtrBase::IsValid(this_01);
          if (cVar2 != '\0') {
            this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0404aec4(*(undefined8 *)(this + 0x38),0);
            this_03 = (GridItem *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
            GridItem::SetGridLocation
                      (this_03,*(int *)(*(long *)(this + 0x10) + 0x114),
                       *(int *)(*(long *)(this + 0x10) + 0x110));
          }
        }
      }
      else {
        cVar2 = isAvatarShieldAlreadyShow(this);
        if (cVar2 != '\0') {
          avatarSkillAddShield(this,true);
        }
      }
      this_00 = *(Plant **)(this + 0x10);
      uVar1 = *(undefined4 *)(this_00 + 0x110);
      *(undefined4 *)(this + 0x58) = *(undefined4 *)(this_00 + 0x114);
      *(undefined4 *)(this + 0x54) = uVar1;
    }
  }
  lVar4 = FUN_0404c94c(this_00);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x28));
  if (cVar2 != '\0') {
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
    (**(code **)(*plVar5 + 0x98))(plVar5,avStack_20);
  }
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    if (!bVar3) {
LAB_0404f3e4:
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    nop();
    if ((((param_1 == extraout_x0) &&
         (cVar2 = PlantRestrictionSet::IsIncluded((Plant *)(lVar4 + 0x368)), cVar2 != '\0')) &&
        (cVar2 = FUN_0404aea0(*(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + 0x887)), cVar2 != '\0'))
       && (cVar2 = Plant::IsSuspended(param_1), cVar2 == '\0')) {
      skillProduceSun(this);
      goto LAB_0404f3e4;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMoonFlower::ApplyPlantfood() */

void __thiscall PlantMoonFlower::ApplyPlantfood(PlantMoonFlower *this)

{
  long lVar1;
  undefined8 uVar2;
  PowerPropsSunProducer aPStack_48 [32];
  SunProducer aSStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::Heal(*(Plant **)(this + 0x10));
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  uVar2 = *(undefined8 *)(this + 0x10);
  getPlantFoodSunProduction();
  lVar1 = FUN_0404c94c(*(undefined8 *)(this + 0x10));
  lVar1 = FUN_0404b09c(*(undefined8 *)(lVar1 + 0x70));
                    /* WARNING: Load size is inaccurate */
  SunProducer::SunProducer
            (*(SunProducer **)(lVar1 + 0x68),*(undefined4 *)(lVar1 + 0x6c),aSStack_28,uVar2,
             aPStack_48);
  SunProducer::Execute(aSStack_28);
  PowerPropsSunProducer::~PowerPropsSunProducer(aPStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

