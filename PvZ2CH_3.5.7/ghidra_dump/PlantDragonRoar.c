// Class: PlantDragonRoar


/* PlantDragonRoar::CanTargetZombie(Sexy::RtWeakPtr<Zombie>, PlantWeapon) */

byte PlantDragonRoar::CanTargetZombie(undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  byte bVar1;
  long *plVar2;
  
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  bVar1 = (**(code **)(*plVar2 + 0x328))();
  return bVar1 ^ 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonRoar::FindTargetDamageableGridItem(Sexy::TRect<int>&, PlantWeapon) */

void PlantDragonRoar::FindTargetDamageableGridItem
               (undefined8 param_1_00,long *param_1,long param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined1 auStack_48 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<BoardEntity*,std::allocator<BoardEntity*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  (**(code **)(*param_1 + 0x2b8))(auStack_48,param_1,param_4);
  EntityFinder::GetEntitiesTouchingRectangle
            (avStack_38,4,auStack_48,*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 4));
  pcVar1 = *(code **)(*param_1 + 0x510);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector(avStack_20,(vector *)avStack_38);
  (*pcVar1)(param_1_00,param_1,avStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector(avStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1_00);
}


/* PlantDragonRoar::CanEndPlantfood() */

bool __thiscall PlantDragonRoar::CanEndPlantfood(PlantDragonRoar *this)

{
  return 2 < *(int *)(*(long *)(this + 0x10) + 200) - 0x11U;
}


/* PlantDragonRoar::onBeThrown() */

void __thiscall PlantDragonRoar::onBeThrown(PlantDragonRoar *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 != '\0') {
    return;
  }
  PlantFramework::onBeThrown((PlantFramework *)this);
  return;
}


/* PlantDragonRoar::FindTargetAndFire(PlantWeapon) */

bool PlantDragonRoar::FindTargetAndFire(long *param_1)

{
  char cVar1;
  
  cVar1 = Plant::CanFindTargetInRow(param_1[2],*(undefined4 *)(param_1[2] + 0x110),1);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x1a0))(param_1);
  }
  return cVar1 != '\0';
}


/* PlantDragonRoar::Initialize() */

void __thiscall PlantDragonRoar::Initialize(PlantDragonRoar *this)

{
  undefined4 uVar1;
  
  PlantFramework::Initialize((PlantFramework *)this);
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x34) = uVar1;
  *(undefined4 *)(this + 0x50) = uVar1;
  *(undefined4 *)(this + 0x54) = uVar1;
  *(undefined4 *)(this + 0x58) = uVar1;
  return;
}


/* PlantDragonRoar::CalcRenderOrder() */

void __thiscall PlantDragonRoar::CalcRenderOrder(PlantDragonRoar *this)

{
  char cVar1;
  float *pfVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined4 uVar3;
  
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 == '\0') {
    this_00 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                **)(this + 0x10);
    if (*(int *)(this_00 + 200) == 0x14) {
      uVar3 = 0x639c0;
    }
    else {
      uVar3 = 0x62250;
    }
  }
  else {
    this_00 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                **)(this + 0x10);
    uVar3 = 0x639c0;
  }
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(this_00);
  Board::MakeRenderOrder(uVar3,*(undefined4 *)(this_00 + 0x110),(int)(805.0 - *pfVar2));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonRoar::StaticClassInit() */

void PlantDragonRoar::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantDragonRoar");
    (*pcVar2)(plVar1,asStack_10,FUN_0418bcf0,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDragonRoar::StaticGetClass() */

long * PlantDragonRoar::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantDragonRoar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantDragonRoar::GetClass() const */

long * PlantDragonRoar::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantDragonRoar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonRoar::calcSuctionDestination(Zombie const*) const */

void PlantDragonRoar::calcSuctionDestination(Zombie *param_1)

{
  float *pfVar1;
  FastCurve local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(param_1 + 0x10));
  Sexy::FastCurve::SetOutRange(local_10,*pfVar1 + 20.0,pfVar1[1]);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10._0_4_,local_10._4_4_);
}


/* PlantDragonRoar::zombieIsInRange(Zombie const*) const */

bool PlantDragonRoar::zombieIsInRange(Zombie *param_1)

{
  float *pfVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x1;
  float fVar2;
  float in_s1;
  
  fVar2 = (float)calcSuctionDestination(param_1);
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(in_x1);
  fVar2 = (float)Distance2D(*pfVar1,pfVar1[1],fVar2,in_s1);
  return fVar2 <= 5.0;
}


/* PlantDragonRoar::onWatered(bool) */

void __thiscall PlantDragonRoar::onWatered(PlantDragonRoar *this,bool param_1)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  bool bVar2;
  RtObject *this_01;
  long *plVar3;
  
  if ((param_1) && (*(int *)(*(long *)(this + 0x10) + 200) == 0xd)) {
    this_00 = (RtMixedPtrBase *)(this + 0x28);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar1 != '\0') {
      this_01 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      bVar2 = Sexy::RtObject::IsA<GridItemEgg>(this_01);
      if (bVar2) {
        plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        (**(code **)(*plVar3 + 0x48))();
        return;
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonRoar::AbsorbZombie(Zombie*, Sexy::SexyVector2, Sexy::SexyVector2) */

void PlantDragonRoar::AbsorbZombie
               (float param_1_00,float param_2,float param_3,float param_4,PlantFramework *param_1,
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *param_6)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  undefined8 local_18;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar3 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(param_6);
  local_18 = *puVar3;
  local_10 = *(float *)(puVar3 + 1);
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
  if ((float)local_18 < param_1_00) goto LAB_0418a650;
  fVar5 = 1.0;
  if (param_2 <= local_18._4_4_) {
    fVar5 = -1.0;
  }
  fVar4 = (float)PVZ_Dt();
  local_18._0_4_ = (float)local_18 - fVar4 * (float)iVar1 * param_3;
  fVar4 = (float)PVZ_Dt();
  local_18._4_4_ = local_18._4_4_ + fVar4 * (float)iVar2 * param_4 * fVar5;
  if (param_1_00 <= (float)local_18) {
    fVar5 = (float)local_18;
    if (ABS(local_18._4_4_ - param_2) < 5.0) {
      local_18 = CONCAT44(param_2,(float)local_18);
    }
LAB_0418a5e0:
    if (param_1_00 == fVar5) goto LAB_0418a6a8;
    dVar6 = sin((double)(fVar5 + fVar5));
    fVar5 = (float)((dVar6 + -1.0) * 0.5) * 10.0;
  }
  else {
    local_18 = CONCAT44(local_18._4_4_,param_1_00);
    if (ABS(local_18._4_4_ - param_2) < 5.0) {
      local_18 = CONCAT44(param_2,param_1_00);
      fVar5 = param_1_00;
      goto LAB_0418a5e0;
    }
LAB_0418a6a8:
    fVar5 = (float)PlantFramework::Rand(param_1,10.0);
    fVar5 = -fVar5;
  }
  fVar5 = fVar5 - local_10;
  fVar4 = (float)PVZ_Dt();
  local_10 = (float)ClampFloat(fVar4 * 10.0 * fVar5,-10.0,0.0);
  (**(code **)(*(long *)param_6 + 0x78))(param_6,&local_18);
LAB_0418a650:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonRoar::allSuctionZombiesAreWithinRange() */

void __thiscall PlantDragonRoar::allSuctionZombiesAreWithinRange(PlantDragonRoar *this)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  RtWeakPtr *this_00;
  ResourceInfo *pRVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x38));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x38));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this_00 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    if (pRVar4 != (ResourceInfo *)0x0) {
      cVar2 = zombieIsInRange((Zombie *)this);
      uVar3 = 0;
      if (cVar2 == '\0') goto LAB_0418ada8;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  uVar3 = 1;
LAB_0418ada8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* PlantDragonRoar::PlantDragonRoar() */

void __thiscall PlantDragonRoar::PlantDragonRoar(PlantDragonRoar *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067fa7d0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  this[0x5c] = (PlantDragonRoar)0x0;
  this[0x5d] = (PlantDragonRoar)0x0;
  return;
}


/* PlantDragonRoar::StaticNew() */

PlantDragonRoar * PlantDragonRoar::StaticNew(void)

{
  PlantDragonRoar *this;
  
  this = ::operator_new(0x60);
  PlantDragonRoar(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonRoar::GetPlantAttackRect(PlantWeapon) */

void PlantDragonRoar::GetPlantAttackRect(Insets *param_1,long param_2,int param_3)

{
  long lVar1;
  float *pfVar2;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_3 == 1) {
    lVar1 = FUN_0418af50(*(undefined8 *)(param_2 + 0x10));
    lVar1 = FUN_0418973c(*(undefined8 *)(lVar1 + 0x70),1);
    Sexy::Insets::Insets((Insets *)&local_28,(Insets *)(lVar1 + 0x58));
    Sexy::Insets::Insets((Insets *)&local_18);
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(param_2 + 0x10));
    local_10 = local_20;
    local_c = local_1c;
    local_18 = (int)((float)local_28 + *pfVar2);
    local_14 = (int)((float)local_24 + pfVar2[1]);
    Sexy::Insets::Insets(param_1,(Insets *)&local_18);
  }
  else {
    PlantFramework::GetPlantAttackRect();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonRoar::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantDragonRoar::Fire
          (PlantDragonRoar *this,RtWeakPtrBase *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_0418af50(*(undefined8 *)(this + 0x10));
  lVar4 = *(long *)(this + 0x10);
  iVar1 = FUN_041896f0(*(undefined4 *)(lVar4 + 0x50));
  *(undefined4 *)(lVar4 + 0x150) = 1;
  if (iVar1 == 2) {
    fVar6 = *(float *)(lVar2 + 0x2b8);
  }
  else {
    if (iVar1 < 3) goto LAB_0418b13c;
    fVar6 = *(float *)(lVar2 + 700);
  }
  fVar5 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
  if (fVar5 < fVar6) {
    *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 2;
  }
LAB_0418b13c:
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  uVar3 = PlantFramework::Fire((PlantFramework *)this,aRStack_10,param_3,param_4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonRoar::scareAwayDinoRunners() */

void __thiscall PlantDragonRoar::scareAwayDinoRunners(PlantDragonRoar *this)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  DinosaurRunner *this_00;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesOnBoard(avStack_20,8);
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
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    this_00 = Sexy::RtObject::Cast<DinosaurRunner>((RtObject *)*puVar3);
    if (((this_00 != (DinosaurRunner *)0x0) &&
        (cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this_00,*(RealObject **)(this + 0x10)),
        cVar2 != '\0')) && (cVar2 = DinosaurRunner::CanBeScaredAway(this_00), cVar2 != '\0')) {
      (**(code **)(*(long *)this_00 + 0x3a0))(this_00,*(undefined8 *)(this + 0x10));
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonRoar::doRoarAttack() */

void __thiscall PlantDragonRoar::doRoarAttack(PlantDragonRoar *this)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  Zombie *this_00;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  scareAwayDinoRunners(this);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    EntityFinder::GetEntitiesOnBoard(avStack_20,2);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar2)
    {
      puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30)
      ;
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4);
      if ((((this_00 != (Zombie *)0x0) && (cVar1 = Zombie::IsBoss(this_00), cVar1 == '\0')) &&
          (cVar1 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar1 == '\0')) &&
         (((cVar1 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar1 == '\0' &&
           (cVar1 = Zombie::HasFogImmune(this_00), cVar1 == '\0')) &&
          (cVar1 = Zombie::IsBerserk(this_00), cVar1 == '\0')))) {
        uVar5 = operator|(1,4);
        uVar3 = operator|(uVar5,0x200);
        cVar1 = Zombie::MatchesAny(this_00,uVar3,*(undefined8 *)(this + 0x10));
        if (cVar1 == '\0') {
          lVar6 = FUN_0418af50(*(undefined8 *)(this + 0x10));
                    /* WARNING: Load size is inaccurate */
          Zombie::ApplyCondition(*(Zombie **)(lVar6 + 0x2e8),0,this_00,2,1);
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonRoar::doNovaAttack(bool) */

void __thiscall PlantDragonRoar::doNovaAttack(PlantDragonRoar *this,bool param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  Zombie *pZVar7;
  undefined8 uVar8;
  long *plVar9;
  code *pcVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_b0;
  undefined8 local_a8;
  Point aPStack_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  Insets aIStack_90 [8];
  undefined4 local_88;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar5 = FUN_0418af50(*(undefined8 *)(this + 0x10));
  if (this[0x5c] == (PlantDragonRoar)0x0) {
    fVar13 = *(float *)(lVar5 + 0x300);
  }
  else {
    fVar13 = *(float *)(lVar5 + 0x2fc);
  }
  fVar11 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
  iVar1 = *(int *)(*(long *)(this + 0x10) + 0x114);
  Sexy::Insets::Insets
            (aIStack_90,iVar1,*(int *)(*(long *)(this + 0x10) + 0x110),
             *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) - iVar1,1);
  if ((this[0x5c] == (PlantDragonRoar)0x0) && (local_88 = 2, param_1)) {
    local_88 = 1;
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  uVar4 = operator|(2,4);
  EntityFinder::GetEntitiesInGridSquares(avStack_80,uVar4,aIStack_90);
  local_b0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8);
    if (!bVar2) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
    pZVar7 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
    if (pZVar7 == (Zombie *)0x0) {
LAB_0418b68c:
      plVar9 = (long *)*puVar6;
      uVar8 = *(undefined8 *)(this + 0x10);
      pcVar10 = *(code **)(*plVar9 + 0x110);
      Sexy::Point::Point(aPStack_a0,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
      DamageInfo::DamageInfo
                ((DamageInfo *)(fVar11 * fVar13),local_98,local_94,aDStack_68,0x800000000000,uVar8,
                 aPStack_a0,0);
      (*pcVar10)(plVar9,aDStack_68);
      DamageInfo::~DamageInfo(aDStack_68);
    }
    else {
      uVar8 = operator|(1,4);
      uVar4 = operator|(uVar8,0x200);
      cVar3 = Zombie::MatchesAny(pZVar7,uVar4,*(undefined8 *)(this + 0x10));
      if (cVar3 == '\0') {
        fVar14 = *(float *)(lVar5 + 0x304);
        fVar12 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
        if (fVar12 < fVar14) {
                    /* WARNING: Load size is inaccurate */
          Zombie::ApplyCondition(*(Zombie **)(lVar5 + 0x308),0,pZVar7,0x2f,1);
        }
        goto LAB_0418b68c;
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b0);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonRoar::zombieIsBlacklisted(Zombie const*) const */

void __thiscall PlantDragonRoar::zombieIsBlacklisted(PlantDragonRoar *this,Zombie *param_1)

{
  bool bVar1;
  int iVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ZombieGargantuar *pZVar7;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(param_1);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  bVar1 = std::operator==((string *)(lVar3 + 8),"dark_wizard");
  if (!bVar1) {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    bVar1 = std::operator==((string *)(lVar3 + 8),"zombie_target_wizard");
    if (!bVar1) {
      lVar3 = FUN_0418af50(*(undefined8 *)(this + 0x10));
      uVar4 = FUN_0418ac78(*(undefined8 *)(lVar3 + 0x2c8));
      uVar5 = FUN_0418acc8(*(undefined8 *)(lVar3 + 0x2d0));
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      local_18 = std::
                 find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                           (uVar4,uVar5,lVar6 + 8);
      local_10 = FUN_0418acc8(*(undefined8 *)(lVar3 + 0x2d0));
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (((bVar1) ||
          (pZVar7 = Sexy::RtObject::Cast<ZombieGargantuar>((RtObject *)param_1),
          pZVar7 != (ZombieGargantuar *)0x0)) || (iVar2 = Zombie::GetSizeType(param_1), iVar2 == 1))
      {
        bVar1 = true;
      }
      else {
        iVar2 = Zombie::GetSizeType(param_1);
        bVar1 = iVar2 == 2;
      }
      goto LAB_0418b7bc;
    }
  }
  bVar1 = false;
LAB_0418b7bc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* PlantDragonRoar::canSwallowZombie(Zombie const*) const */

undefined8 __thiscall PlantDragonRoar::canSwallowZombie(PlantDragonRoar *this,Zombie *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  cVar1 = zombieIsBlacklisted(this,param_1);
  if (cVar1 == '\0') {
    iVar2 = FUN_041896f0(*(undefined4 *)(param_1 + 0x50));
    iVar3 = FUN_041896fc(*(undefined8 *)(this + 0x10));
    if ((((iVar2 <= iVar3) && (cVar1 = Zombie::HasFogImmune(param_1), cVar1 == '\0')) &&
        (cVar1 = Zombie::IsBerserk(param_1), cVar1 == '\0')) &&
       ((cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar1 == '\0' &&
        (cVar1 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar1 == '\0')))) {
      uVar4 = Zombie::CanTakeFatalDamage(param_1);
      return uVar4;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonRoar::pullSuctionZombies() */

void PlantDragonRoar::pullSuctionZombies(void)

{
  bool bVar1;
  char cVar2;
  Zombie *in_x0;
  long lVar3;
  RtWeakPtr *this;
  ResourceInfo *pRVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 in_s1;
  undefined8 local_88;
  undefined8 local_80;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_0418af50(*(undefined8 *)(in_x0 + 0x10));
  uVar5 = *(undefined8 *)(lVar3 + 0x2ec);
  local_88 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(in_x0 + 0x38));
  local_80 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(in_x0 + 0x38));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_88,(__normal_iterator *)&local_80), bVar1) {
    this = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
    if (pRVar4 != (ResourceInfo *)0x0) {
      uVar8 = calcSuctionDestination(in_x0);
      AbsorbZombie(uVar8,in_s1,(int)uVar5,(int)((ulong)uVar5 >> 0x20));
      cVar2 = canSwallowZombie((PlantDragonRoar *)in_x0,(Zombie *)pRVar4);
      if ((cVar2 != '\0') && (cVar2 = zombieIsInRange(in_x0), cVar2 != '\0')) {
        uVar7 = *(undefined8 *)(in_x0 + 0x10);
        pcVar6 = *(code **)(*(long *)pRVar4 + 0x120);
        Sexy::Point::Point(aPStack_78,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
        in_s1 = local_70;
        DamageInfo::DamageInfo((DamageInfo *)0x0,local_70,local_6c,aDStack_68,4,uVar7,aPStack_78,0);
        (*pcVar6)(pRVar4,aDStack_68);
        DamageInfo::~DamageInfo(aDStack_68);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDragonRoar::canBeMovedByDragonRoar(Zombie const*) const */

byte __thiscall PlantDragonRoar::canBeMovedByDragonRoar(PlantDragonRoar *this,Zombie *param_1)

{
  char cVar1;
  byte bVar2;
  float *pfVar3;
  float *pfVar4;
  
  cVar1 = canSwallowZombie(this,param_1);
  if ((((cVar1 != '\0') &&
       (cVar1 = RealObject::IsOnOpposingTeam((RealObject *)param_1,*(RealObject **)(this + 0x10)),
       cVar1 != '\0')) && (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 == '\0'))
     && (((cVar1 = Zombie::IsIgnoringAllDamage(param_1), cVar1 == '\0' &&
          (cVar1 = Zombie::CanBeLaunchedByPlants(param_1), cVar1 != '\0')) &&
         (cVar1 = Zombie::IsControlled(param_1), cVar1 == '\0')))) {
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)param_1);
    pfVar4 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(this + 0x10));
    if (*pfVar4 - 30.0 < *pfVar3) {
      bVar2 = Zombie::IsInvisible(param_1);
      return bVar2 ^ 1;
    }
  }
  return 0;
}


/* PlantDragonRoar::~PlantDragonRoar() */

void __thiscall PlantDragonRoar::~PlantDragonRoar(PlantDragonRoar *this)

{
  char cVar1;
  int iVar2;
  RtObject *this_00;
  GridItemEgg *this_01;
  long *plVar3;
  RtMixedPtrBase *this_02;
  
  this_02 = (RtMixedPtrBase *)(this + 0x28);
  *(undefined ***)this = &PTR_GetClass_067fa7d0;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_02);
  if (cVar1 != '\0') {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
    this_01 = Sexy::RtObject::Cast<GridItemEgg>(this_00);
    if ((this_01 != (GridItemEgg *)0x0) && (iVar2 = GridItemEgg::getState(this_01), iVar2 == 1)) {
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
      (**(code **)(*plVar3 + 0x48))();
    }
  }
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x38));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantDragonRoar::~PlantDragonRoar() */

void __thiscall PlantDragonRoar::~PlantDragonRoar(PlantDragonRoar *this)

{
  ~PlantDragonRoar(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonRoar::markSuctionZombies() */

void __thiscall PlantDragonRoar::markSuctionZombies(PlantDragonRoar *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  Zombie *this_00;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined8 local_48;
  undefined8 local_40;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  iVar1 = *(int *)(*(long *)(this + 0x10) + 0x114);
  Sexy::Insets::Insets
            (aIStack_30,iVar1,*(int *)(*(long *)(this + 0x10) + 0x110) + -1,
             *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) - iVar1,3);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,aIStack_30);
  lVar4 = FUN_0418af50(*(undefined8 *)(this + 0x10));
  iVar1 = *(int *)(lVar4 + 0x2c0);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar3) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    nop();
    if ((this_00 != (Zombie *)0x0) && (cVar2 = canBeMovedByDragonRoar(this,this_00), cVar2 != '\0'))
    {
      auVar6 = PVZ_EOT();
      Zombie::ApplyCondition((Zombie *)auVar6,0,this_00,0x18,1);
      Zombie::SetIsControlled(this_00,true);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aIStack_30,(RtWeakPtrBase *)aRStack_38);
      std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                 (this + 0x38),(RtWeakPtr *)aIStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    }
    uVar5 = FUN_04189730(*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40));
    if ((ulong)(long)iVar1 <= uVar5) break;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonRoar::setState(int) */

void __thiscall PlantDragonRoar::setState(PlantDragonRoar *this,int param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  RtWeakPtr<SpartanBambooMatrixSystem> *this_01;
  bool bVar1;
  char cVar2;
  int iVar3;
  PlantAnimRig_DragonRoar *this_02;
  GridItem *this_03;
  RtWeakPtr *this_04;
  Zombie *pZVar4;
  long *plVar5;
  RtObject *pRVar6;
  char *pcVar7;
  long lVar8;
  code *pcVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 local_d0;
  undefined8 local_c8;
  Point aPStack_c0 [8];
  undefined4 local_b8;
  undefined4 local_b4;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_b0 [72];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  lVar8 = *(long *)(this + 0x10);
  iVar3 = *(int *)(lVar8 + 200);
  local_8 = ___stack_chk_guard;
  if (iVar3 == 0x12) {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x38);
    local_d0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    local_c8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_d0,(__normal_iterator *)&local_c8), bVar1)
    {
      this_04 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_d0)
      ;
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_04);
      if (bVar1) {
        pZVar4 = (Zombie *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_04);
        Zombie::EndCondition(pZVar4,0x18);
        pZVar4 = (Zombie *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_04);
        Zombie::SetIsControlled(pZVar4,false);
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this_04);
        uVar10 = *(undefined8 *)(this + 0x10);
        pcVar9 = *(code **)(*plVar5 + 0x120);
        Sexy::Point::Point(aPStack_c0,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_b8,1.0,0.0);
        DamageInfo::DamageInfo((DamageInfo *)0x0,local_b8,local_b4,aDStack_68,4,uVar10,aPStack_c0,0)
        ;
        (*pcVar9)(plVar5,aDStack_68);
        DamageInfo::~DamageInfo(aDStack_68);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_d0);
    }
    std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
              ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)this_00);
    lVar8 = *(long *)(this + 0x10);
    iVar3 = *(int *)(lVar8 + 200);
  }
  *(int *)(this + 0x30) = iVar3;
  *(int *)(lVar8 + 200) = param_1;
  this_02 = (PlantAnimRig_DragonRoar *)FUN_0418aec8(lVar8);
  switch(param_1) {
  case 4:
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aDStack_68);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x28),(RtWeakPtr *)aDStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_68);
    (**(code **)(*(long *)this_02 + 0x118))(this_02);
    break;
  case 10:
    this_01 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x28);
    UnchartedModePlantNumData::UnchartedModePlantNumData((UnchartedModePlantNumData *)&local_b8,1,0)
    ;
    PlantFramework::FindTargetZombie
              ((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_68,this,0,
               (UnchartedModePlantNumData *)&local_b8);
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_01,(RtWeakPtrBase *)aDStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_68);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_01);
    if (cVar2 == '\0') {
      PlantFramework::FindTargetDamageableGridItem((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_68,this)
      ;
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_01,(RtWeakPtrBase *)aDStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_68);
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_01);
      if (cVar2 == '\0') break;
      pRVar6 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      this_03 = Sexy::RtObject::Cast<GridItem>(pRVar6);
      if ((this_03 != (GridItem *)0x0) &&
         (bVar1 = Sexy::RtObject::IsA<GridItemEgg>((RtObject *)this_03), bVar1)) {
        cVar2 = (**(code **)(*(long *)this_03 + 0x218))(this_03,*(undefined8 *)(this + 0x10));
        if (cVar2 == '\0') {
          std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                    ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aDStack_68);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)this_01,(RtWeakPtr *)aDStack_68);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_68);
          (**(code **)(*(long *)this_02 + 0x118))(this_02);
          *(undefined4 *)(this + 0x30) = *(undefined4 *)(*(long *)(this + 0x10) + 200);
          *(undefined4 *)(*(long *)(this + 0x10) + 200) = 4;
        }
        else {
          PlantAnimRig_DragonRoar::PlaySwallowEgg(this_02);
          setState(this,0xd);
        }
        break;
      }
    }
    else {
      pRVar6 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      pZVar4 = Sexy::RtObject::Cast<Zombie>(pRVar6);
      cVar2 = canSwallowZombie(this,pZVar4);
      if (cVar2 != '\0') {
        PlantAnimRig_DragonRoar::PlaySwallowAttack(this_02);
        break;
      }
    }
    PlantAnimRig_DragonRoar::PlayBiteAttack(this_02);
    break;
  case 0xe:
    if (*(int *)(this + 0x30) != 0xf) {
      fVar11 = (float)PVZ_T();
      lVar8 = FUN_0418af50(*(undefined8 *)(this + 0x10));
      *(float *)(this + 0x34) = fVar11 + *(float *)(lVar8 + 0x2e4);
    }
    PlantAnimRig_DragonRoar::PlayChewing(this_02);
    break;
  case 0xf:
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_b0);
    PlantAnimRig_DragonRoar::PlayChewingAttack(this_02,aRStack_b0);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_b0);
    break;
  case 0x10:
    PlantAnimRig_DragonRoar::PlaySwallow(this_02);
    break;
  case 0x11:
    pcVar7 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar7,"Play_Plant_DragonRoar_PlantFood_Roar");
    PlantAnimRig_DragonRoar::PlayPFRoaring(this_02);
    break;
  case 0x12:
    pcVar7 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar7,"Play_Plant_DragonRoar_PlantFood_Suck");
    markSuctionZombies(this);
    break;
  case 0x14:
    PlantAnimRig_DragonRoar::PlayLevel5Attack(this_02,(bool)this[0x5c]);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDragonRoar::ApplyPlantfood() */

void __thiscall PlantDragonRoar::ApplyPlantfood(PlantDragonRoar *this)

{
  float fVar1;
  
  setState(this,0x11);
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  Board::SetGridSquareLocked
            (*(Board **)(gLawnApp + 0x9f0),*(int *)(*(long *)(this + 0x10) + 0x114),
             *(int *)(*(long *)(this + 0x10) + 0x110),true);
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x54) = fVar1 + 0.75;
  *(float *)(this + 0x58) = fVar1 + 0.75 + 2.0;
  return;
}


/* PlantDragonRoar::CancelPlantfood() */

void __thiscall PlantDragonRoar::CancelPlantfood(PlantDragonRoar *this)

{
  undefined4 uVar1;
  
  setState(this,4);
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  Board::SetGridSquareLocked
            (*(Board **)(gLawnApp + 0x9f0),*(int *)(*(long *)(this + 0x10) + 0x114),
             *(int *)(*(long *)(this + 0x10) + 0x110),false);
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x54) = uVar1;
  *(undefined4 *)(this + 0x58) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonRoar::UpdateActions() */

void __thiscall PlantDragonRoar::UpdateActions(PlantDragonRoar *this)

{
  PlantDragonRoar PVar1;
  char cVar2;
  long lVar3;
  PlantAnimRig_DragonRoar *this_00;
  string *psVar4;
  char *__s;
  Plant *this_01;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_0418af50(*(undefined8 *)(this + 0x10));
  this_00 = (PlantAnimRig_DragonRoar *)FUN_0418aec8(*(undefined8 *)(this + 0x10));
  this_01 = *(Plant **)(this + 0x10);
  cVar2 = FUN_04189704(this_01);
  if ((cVar2 != '\0') && (this[0x5d] != (PlantDragonRoar)0x0)) {
    fVar7 = *(float *)(this + 0x50);
    fVar5 = (float)PVZ_T();
    if (fVar7 < fVar5) {
      doNovaAttack(this,false);
      this_01 = *(Plant **)(this + 0x10);
      *(float *)(this + 0x50) = *(float *)(this + 0x50) + *(float *)(lVar3 + 0x2f8);
    }
    else {
      this_01 = *(Plant **)(this + 0x10);
    }
  }
  switch(*(undefined4 *)(this_01 + 200)) {
  case 4:
    cVar2 = Plant::CanFindTarget(this_01,0);
    if (cVar2 != '\0') {
      (**(code **)(*(long *)this + 0x1a0))(this);
    }
    break;
  case 10:
  case 0xb:
  case 0xd:
  case 0x13:
  case 0x14:
    cVar2 = PlantAnimRig_DragonRoar::CurrentAnimationIsFinished(this_00);
    if (cVar2 == '\0') break;
    goto LAB_0418c9c4;
  case 0xc:
  case 0xf:
    cVar2 = PlantAnimRig_DragonRoar::CurrentAnimationIsFinished(this_00);
    if (cVar2 != '\0') {
      setState(this,0xe);
    }
    break;
  case 0xe:
    Plant::UpdateShooter(this_01);
    fVar7 = *(float *)(this + 0x34);
    fVar5 = (float)PVZ_T();
    if (fVar7 < fVar5) {
      uVar6 = PVZ_EOT();
      *(undefined4 *)(this + 0x34) = uVar6;
      setState(this,0x10);
    }
    break;
  case 0x10:
    cVar2 = PlantAnimRig_DragonRoar::CurrentAnimationIsFinished(this_00);
    if (cVar2 == '\0') break;
    cVar2 = FUN_04189704(*(undefined8 *)(this + 0x10));
    if (cVar2 != '\0') {
      fVar7 = *(float *)(lVar3 + 0x2f4);
      fVar5 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
      PVar1 = (PlantDragonRoar)(fVar5 < fVar7);
      this[0x5c] = PVar1;
      if ((bool)PVar1) {
        __s = "Play_Plant_DragonRoar_Attack_Lev_5";
      }
      else {
        __s = "Play_Plant_DragonRoar_Attack_Lev_5_Easter_Egg";
      }
      std::string::string(asStack_10,__s);
      nop();
      psVar4 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(psVar4,asStack_10);
      setState(this,0x14);
      std::string::~string(asStack_10);
      break;
    }
LAB_0418c9c4:
    setState(this,4);
    break;
  case 0x11:
    fVar5 = (float)PVZ_T();
    if ((*(float *)(this + 0x54) <= fVar5) && (fVar5 <= *(float *)(this + 0x58))) {
      scareAwayDinoRunners(this);
    }
    break;
  case 0x12:
    pullSuctionZombies();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDragonRoar::PlayAttackAnimation() */

void __thiscall PlantDragonRoar::PlayAttackAnimation(PlantDragonRoar *this)

{
  if (*(int *)(*(long *)(this + 0x10) + 200) == 4) {
    setState(this,10);
    return;
  }
  if (*(int *)(*(long *)(this + 0x10) + 200) != 0xe) {
    return;
  }
  setState(this,0xf);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonRoar::chewTarget() */

void __thiscall PlantDragonRoar::chewTarget(PlantDragonRoar *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  long lVar3;
  Zombie *this_01;
  RtObject *pRVar4;
  GridItem *pGVar5;
  PlantAction *pPVar6;
  code *pcVar7;
  undefined8 uVar8;
  Point aPStack_d8 [8];
  undefined4 local_d0;
  undefined4 local_cc;
  DamageInfo aDStack_c8 [96];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  pPVar6 = *(PlantAction **)(this + 0x10);
  this_00 = (RtWeakPtr *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_0418af50(pPVar6);
  FUN_0418973c(*(undefined8 *)(lVar3 + 0x70),0);
  Plant::calcDamageInfoFromPlantAction(pPVar6);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    pRVar4 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    this_01 = Sexy::RtObject::Cast<Zombie>(pRVar4);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar1) {
      pRVar4 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      pGVar5 = Sexy::RtObject::Cast<GridItem>(pRVar4);
      if (this_01 == (Zombie *)0x0) goto LAB_0418cc00;
    }
    else if (this_01 == (Zombie *)0x0) goto LAB_0418cb5c;
    cVar2 = canSwallowZombie(this,this_01);
    if (cVar2 != '\0') {
      pcVar7 = *(code **)(*(long *)this_01 + 0x120);
      uVar8 = *(undefined8 *)(this + 0x10);
      Sexy::Point::Point(aPStack_d8,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_d0,1.0,0.0);
      DamageInfo::DamageInfo((DamageInfo *)0x0,local_d0,local_cc,aDStack_68,4,uVar8,aPStack_d8,0);
      (*pcVar7)(this_01,aDStack_68);
      DamageInfo::~DamageInfo(aDStack_68);
      setState(this,0xc);
      goto LAB_0418cb5c;
    }
    lVar3 = *(long *)this_01;
  }
  else {
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (!bVar1) goto LAB_0418cb5c;
    pRVar4 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pGVar5 = Sexy::RtObject::Cast<GridItem>(pRVar4);
LAB_0418cc00:
    this_01 = (Zombie *)pGVar5;
    if ((this_01 == (Zombie *)0x0) ||
       (bVar1 = Sexy::RtObject::IsA<GridItemEgg>((RtObject *)this_01), bVar1)) goto LAB_0418cb5c;
    lVar3 = *(long *)this_01;
  }
  (**(code **)(lVar3 + 0x110))(this_01,aDStack_c8);
  setState(this,0xb);
LAB_0418cb5c:
  DamageInfo::~DamageInfo(aDStack_c8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDragonRoar::OnAnimCommand(std::string const&, std::string const&) */

void PlantDragonRoar::OnAnimCommand(string *param_1,string *param_2)

{
  RtMixedPtrBase *this;
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  RtObject *pRVar6;
  GridItemEgg *pGVar7;
  undefined4 uVar8;
  
  bVar1 = std::operator==(param_2,"attack");
  if (bVar1) {
    pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar5,"Play_Plant_DragonRoar_Attack");
    chewTarget((PlantDragonRoar *)param_1);
    PlantFramework::OnAnimCommand(param_1,param_2);
    return;
  }
  bVar1 = std::operator==(param_2,"swallow_egg");
  if (bVar1) {
    this = (RtMixedPtrBase *)(param_1 + 0x28);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this);
    if (cVar2 != '\0') {
      pRVar6 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      pGVar7 = Sexy::RtObject::Cast<GridItemEgg>(pRVar6);
      if ((pGVar7 != (GridItemEgg *)0x0) &&
         (cVar2 = (**(code **)(*(long *)pGVar7 + 0x2b0))(), cVar2 == '\0')) {
        bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this);
        if (bVar1) {
          pRVar6 = (RtObject *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
          pGVar7 = Sexy::RtObject::Cast<GridItemEgg>(pRVar6);
          if (pGVar7 != (GridItemEgg *)0x0) {
            GridItemEgg::IsSwallowedByEntity((BoardEntity *)pGVar7);
            PlantFramework::OnAnimCommand(param_1,param_2);
            return;
          }
        }
        goto LAB_0418cd28;
      }
    }
    setState((PlantDragonRoar *)param_1,4);
  }
  else {
    bVar1 = std::operator==(param_2,"disgorge");
    if (bVar1) {
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0x28));
      if (bVar1) {
        pRVar6 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x28));
        pGVar7 = Sexy::RtObject::Cast<GridItemEgg>(pRVar6);
        if (pGVar7 != (GridItemEgg *)0x0) {
          iVar3 = FUN_041896f4(*(undefined4 *)(pGVar7 + 0x134));
          GridItemEgg::FlyOutBoard(pGVar7,iVar3 + -2);
          PlantFramework::OnAnimCommand(param_1,param_2);
          return;
        }
      }
    }
    else {
      bVar1 = std::operator==(param_2,"PFRoar");
      if (bVar1) {
        doRoarAttack((PlantDragonRoar *)param_1);
      }
      else {
        bVar1 = std::operator==(param_2,"PFAbsorb");
        if (bVar1) {
          uVar8 = PVZ_EOT();
          *(undefined4 *)(param_1 + 0x54) = uVar8;
          setState((PlantDragonRoar *)param_1,0x12);
        }
        else {
          bVar1 = std::operator==(param_2,"PFSwallow");
          if (bVar1) {
            lVar4 = FUN_04189730(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
            if (lVar4 == 0) {
              (**(code **)(*(long *)param_1 + 0x228))(param_1);
            }
            else {
              setState((PlantDragonRoar *)param_1,0x13);
            }
          }
          else {
            bVar1 = std::operator==(param_2,"nova_start");
            if (bVar1) {
              param_1[0x5d] = (string)0x1;
              uVar8 = PVZ_T();
              *(undefined4 *)(param_1 + 0x50) = uVar8;
            }
            else {
              bVar1 = std::operator==(param_2,"nova_stop");
              if (bVar1) {
                param_1[0x5d] = (string)0x0;
                uVar8 = PVZ_EOT();
                *(undefined4 *)(param_1 + 0x50) = uVar8;
              }
              else {
                bVar1 = std::operator==(param_2,"nova_lasthit");
                if (bVar1) {
                  doNovaAttack((PlantDragonRoar *)param_1,true);
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0418cd28:
  PlantFramework::OnAnimCommand(param_1,param_2);
  return;
}

