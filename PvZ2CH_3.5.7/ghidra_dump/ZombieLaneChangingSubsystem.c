// Class: ZombieLaneChangingSubsystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLaneChangingSubsystem::StaticClassInit() */

void ZombieLaneChangingSubsystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieLaneChangingSubsystem");
    (*pcVar3)(plVar2,asStack_10,FUN_0409eb7c,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombieLaneChangingRecord");
    (*pcVar3)(plVar2,asStack_10,FUN_0409ece0,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieLaneChangingSubsystem::StaticGetClass() */

long * ZombieLaneChangingSubsystem::StaticGetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieLaneChangingSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieLaneChangingSubsystem::GetClass() const */

long * ZombieLaneChangingSubsystem::GetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieLaneChangingSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieLaneChangingSubsystem::getChangerRecordIndexFor(Sexy::RtWeakPtr<Zombie>) const */

ulong __thiscall
ZombieLaneChangingSubsystem::getChangerRecordIndexFor
          (ZombieLaneChangingSubsystem *this,RtWeakPtrBase *param_2)

{
  char cVar1;
  RtWeakPtrBase *this_00;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar3 = 0;
  do {
    uVar4 = *(undefined8 *)(this + 0x10);
    uVar5 = uVar3 & 0xffffffff;
    uVar2 = FUN_0409e1cc(uVar4,*(undefined8 *)(this + 0x18));
    if (uVar2 <= uVar3) {
      return 0xffffffff;
    }
    this_00 = (RtWeakPtrBase *)FUN_0409e208(uVar4,uVar3);
    uVar3 = uVar3 + 1;
    cVar1 = Sexy::RtWeakPtrBase::operator==(this_00,param_2);
  } while (cVar1 == '\0');
  return uVar5;
}


/* ZombieLaneChangingSubsystem::isDoneWithCurrentState(ZombieLaneChangingRecord&) */

bool __thiscall
ZombieLaneChangingSubsystem::isDoneWithCurrentState
          (ZombieLaneChangingSubsystem *this,ZombieLaneChangingRecord *param_1)

{
  return *(float *)(param_1 + 0x14) <= *(float *)(param_1 + 0x10);
}


/* ZombieLaneChangingSubsystem::updateStateAndDuration(ZombieLaneChangingRecord&,
   ZombieLaneChangingState, float) */

void __thiscall
ZombieLaneChangingSubsystem::updateStateAndDuration
          (undefined4 param_1_00,undefined8 param_2,long param_1,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x14) = param_1_00;
  *(undefined4 *)(param_1 + 0x24) = param_4;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


/* ZombieLaneChangingSubsystem::checkForTimeToDelete(ZombieLaneChangingRecord&) */

void __thiscall
ZombieLaneChangingSubsystem::checkForTimeToDelete
          (ZombieLaneChangingSubsystem *this,ZombieLaneChangingRecord *param_1)

{
  char cVar1;
  
  cVar1 = isDoneWithCurrentState(this,param_1);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x24) = 2;
  }
  return;
}


/* ZombieLaneChangingSubsystem::getYForRow(int) const */

float __thiscall
ZombieLaneChangingSubsystem::getYForRow(ZombieLaneChangingSubsystem *this,int param_1)

{
  int iVar1;
  
  iVar1 = BoardTransforms::GridToBoardSpaceY(param_1);
  return (float)iVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLaneChangingSubsystem::CanZombieMoveTo(Zombie*, int) */

void ZombieLaneChangingSubsystem::CanZombieMoveTo(Zombie *param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int local_18;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  Sexy::Point::Point(aPStack_10,local_18,param_2);
  cVar1 = NewPVPUtils::IsPlayingNewPVP();
  if (cVar1 == '\0') {
    if (-1 < param_2) {
      iVar3 = BoardConstants::NUMBER_OF_ROWS();
joined_r0x0409e5c4:
      if (param_2 < iVar3) {
        bVar2 = Board::IsPitOfDoom(*(Board **)(gLawnApp + 0x9f0),aPStack_10);
        bVar2 = bVar2 ^ 1;
        goto LAB_0409e580;
      }
    }
  }
  else {
    uVar4 = NewPVPUtils::IsConcreteRegion(aPStack_10);
    if ((uVar4 & 0xff) < (uint)~param_2 >> 0x1f) {
      iVar3 = BoardConstants::NUMBER_OF_ROWS();
      goto joined_r0x0409e5c4;
    }
  }
  bVar2 = 0;
LAB_0409e580:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


/* ZombieLaneChangingSubsystem::CanZombieMoveUp(Zombie*) */

void ZombieLaneChangingSubsystem::CanZombieMoveUp(Zombie *param_1)

{
  int iVar1;
  
  iVar1 = SharkMinion::getRow((SharkMinion *)param_1);
  CanZombieMoveTo(param_1,iVar1 + -1);
  return;
}


/* ZombieLaneChangingSubsystem::CanZombieMoveDown(Zombie*) */

void ZombieLaneChangingSubsystem::CanZombieMoveDown(Zombie *param_1)

{
  int iVar1;
  
  iVar1 = SharkMinion::getRow((SharkMinion *)param_1);
  CanZombieMoveTo(param_1,iVar1 + 1);
  return;
}


/* ZombieLaneChangingSubsystem::checkIncompatability(ZombieLaneChangingRecord&) */

void __thiscall
ZombieLaneChangingSubsystem::checkIncompatability
          (ZombieLaneChangingSubsystem *this,ZombieLaneChangingRecord *param_1)

{
  char cVar1;
  long *plVar2;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)param_1);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    cVar1 = (**(code **)(*plVar2 + 0x328))();
    if (cVar1 == '\0') {
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 2;
  return;
}


/* ZombieLaneChangingSubsystem::setComplete(ZombieLaneChangingRecord&) */

void __thiscall
ZombieLaneChangingSubsystem::setComplete
          (ZombieLaneChangingSubsystem *this,ZombieLaneChangingRecord *param_1)

{
  Zombie *this_00;
  
  this_00 = (Zombie *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  Zombie::SetIsControlled(this_00,false);
                    /* WARNING: Load size is inaccurate */
  updateStateAndDuration(*(ZombieLaneChangingSubsystem **)(param_1 + 0x20),this,param_1,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLaneChangingSubsystem::isNotValidMoveTarget(Sexy::RtWeakPtr<Zombie>, int) */

void __thiscall
ZombieLaneChangingSubsystem::isNotValidMoveTarget
          (ZombieLaneChangingSubsystem *this,RtMixedPtrBase *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  SharkMinion *this_00;
  Zombie *this_01;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar1 == '\0') {
    cVar1 = '\x01';
  }
  else {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
    iVar2 = getChangerRecordIndexFor(this,aRStack_10);
    if (iVar2 == -1) {
      this_00 = (SharkMinion *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      iVar2 = SharkMinion::getRow(this_00);
      if (iVar2 != param_3) {
        this_01 = (Zombie *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2)
        ;
        cVar1 = Zombie::IsControlled(this_01);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLaneChangingSubsystem::IsZombieChangingLanes(Zombie*) const */

void ZombieLaneChangingSubsystem::IsZombieChangingLanes(Zombie *param_1)

{
  int iVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  iVar1 = getChangerRecordIndexFor((ZombieLaneChangingSubsystem *)param_1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* ZombieLaneChangingSubsystem::ZombieLaneChangingSubsystem() */

void __thiscall
ZombieLaneChangingSubsystem::ZombieLaneChangingSubsystem(ZombieLaneChangingSubsystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_067d05a0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* ZombieLaneChangingSubsystem::StaticNew() */

ZombieLaneChangingSubsystem * ZombieLaneChangingSubsystem::StaticNew(void)

{
  ZombieLaneChangingSubsystem *this;
  
  this = ::operator_new(0x28);
  ZombieLaneChangingSubsystem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLaneChangingSubsystem::updateZombiePosition(ZombieLaneChangingRecord&) */

void __thiscall
ZombieLaneChangingSubsystem::updateZombiePosition
          (ZombieLaneChangingSubsystem *this,ZombieLaneChangingRecord *param_1)

{
  Zombie *this_00;
  EntityConditionTracker<Creature,CreatureConditions> *this_01;
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float fStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Zombie *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  this_01 = (EntityConditionTracker<Creature,CreatureConditions> *)
            Zombie::GetConditionTracker(this_00);
  fVar2 = (float)EntityConditionTracker<Creature,CreatureConditions>::GetSpeedModifier(this_01);
  fVar3 = (float)PVZ_Dt();
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + fVar2 * fVar3;
  local_20 = getYForRow(this,*(int *)(param_1 + 8));
  local_1c = getYForRow(this,*(int *)(param_1 + 0xc));
  fVar2 = CurveLerp<float>(0,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x10),
                           &local_20,&local_1c,*(undefined4 *)(param_1 + 0x18));
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this_00);
  local_10 = *(undefined4 *)(puVar1 + 1);
  _local_18 = CONCAT44(fVar2,(int)*puVar1);
  (**(code **)(*(long *)this_00 + 0x78))(this_00,&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieLaneChangingSubsystem::~ZombieLaneChangingSubsystem() */

void __thiscall
ZombieLaneChangingSubsystem::~ZombieLaneChangingSubsystem(ZombieLaneChangingSubsystem *this)

{
  *(undefined ***)this = &PTR_GetClass_067d05a0;
  std::vector<ZombieLaneChangingRecord,std::allocator<ZombieLaneChangingRecord>>::~vector
            ((vector<ZombieLaneChangingRecord,std::allocator<ZombieLaneChangingRecord>> *)
             (this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* ZombieLaneChangingSubsystem::~ZombieLaneChangingSubsystem() */

void __thiscall
ZombieLaneChangingSubsystem::~ZombieLaneChangingSubsystem(ZombieLaneChangingSubsystem *this)

{
  ~ZombieLaneChangingSubsystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLaneChangingSubsystem::RemoveZombie(Zombie*) */

void __thiscall
ZombieLaneChangingSubsystem::RemoveZombie(ZombieLaneChangingSubsystem *this,Zombie *param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  Zombie *pZVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar5 = *(undefined8 *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_0409e1cc(uVar5,*(undefined8 *)(this + 0x18));
  uVar1 = iVar3 - 1;
  if (-1 < (int)uVar1) {
    lVar6 = (long)(int)uVar1 + -1;
    lVar2 = lVar6;
    lVar8 = (long)(int)uVar1;
    while( true ) {
      lVar7 = lVar2;
      this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0409e1fc(uVar5,lVar8);
      pZVar4 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      if (param_1 == pZVar4) {
        local_20 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(this + 0x10));
        local_18 = __gnu_cxx::
                   __normal_iterator<MeteorLauncherEntry*,std::vector<MeteorLauncherEntry,std::allocator<MeteorLauncherEntry>>>
                   ::operator+((__normal_iterator<MeteorLauncherEntry*,std::vector<MeteorLauncherEntry,std::allocator<MeteorLauncherEntry>>>
                                *)&local_20,lVar8);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,(__normal_iterator *)&local_18);
        std::vector<ZombieLaneChangingRecord,std::allocator<ZombieLaneChangingRecord>>::erase
                  ((vector<ZombieLaneChangingRecord,std::allocator<ZombieLaneChangingRecord>> *)
                   (this + 0x10),local_10);
      }
      if (lVar7 == lVar6 - (ulong)uVar1) break;
      uVar5 = *(undefined8 *)(this + 0x10);
      lVar2 = lVar7 + -1;
      lVar8 = lVar7;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLaneChangingSubsystem::Update() */

void __thiscall ZombieLaneChangingSubsystem::Update(ZombieLaneChangingSubsystem *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  undefined *this_01;
  bool bVar1;
  char cVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  Zombie *pZVar3;
  float fVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
LAB_0409f784:
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  do {
    if (!bVar1) {
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    checkIncompatability(this,(ZombieLaneChangingRecord *)this_02);
    if (*(int *)(this_02 + 0x24) == 0) {
      updateZombiePosition(this,(ZombieLaneChangingRecord *)this_02);
      cVar2 = isDoneWithCurrentState(this,(ZombieLaneChangingRecord *)this_02);
      this_01 = gMessageRouter;
      if (cVar2 != '\0') {
        pZVar3 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
        MessageRouter::Broadcast<Zombie*,Zombie*>
                  ((MessageRouter *)this_01,Message::ZombieLaneChangeEnded,pZVar3);
        setComplete(this,(ZombieLaneChangingRecord *)this_02);
      }
    }
    else {
      if (*(int *)(this_02 + 0x24) != 1) break;
      fVar4 = (float)PVZ_Dt();
      *(float *)(this_02 + 0x10) = *(float *)(this_02 + 0x10) + fVar4;
      checkForTimeToDelete(this,(ZombieLaneChangingRecord *)this_02);
    }
    __gnu_cxx::
    __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
    ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                  *)&local_18);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  } while( true );
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  std::vector<ZombieLaneChangingRecord,std::allocator<ZombieLaneChangingRecord>>::erase
            ((vector<ZombieLaneChangingRecord,std::allocator<ZombieLaneChangingRecord>> *)this_00,
             local_10);
  goto LAB_0409f784;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLaneChangingSubsystem::ForceLaneChange(ZombieLaneChangingRecord&) */

void __thiscall
ZombieLaneChangingSubsystem::ForceLaneChange
          (ZombieLaneChangingSubsystem *this,ZombieLaneChangingRecord *param_1)

{
  undefined *this_00;
  char cVar1;
  Zombie *pZVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)param_1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  cVar1 = isNotValidMoveTarget(this,aRStack_10,*(undefined4 *)(param_1 + 0xc));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (cVar1 == '\0') {
    pZVar2 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    Zombie::SetIsControlled(pZVar2,true);
                    /* WARNING: Load size is inaccurate */
    updateStateAndDuration(*(ZombieLaneChangingSubsystem **)(param_1 + 0x1c),this,param_1,0);
    std::vector<ZombieLaneChangingRecord,std::allocator<ZombieLaneChangingRecord>>::push_back
              ((vector<ZombieLaneChangingRecord,std::allocator<ZombieLaneChangingRecord>> *)
               (this + 0x10),param_1);
    this_00 = gMessageRouter;
    pZVar2 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    MessageRouter::Broadcast<Zombie*,Zombie*>
              ((MessageRouter *)this_00,Message::ZombieLaneChangeStarted,pZVar2);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1 == '\0');
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLaneChangingSubsystem::ForceLaneChange(Zombie*, int, float, CurveType, float) */

void __thiscall
ZombieLaneChangingSubsystem::ForceLaneChange
          (undefined4 param_3,undefined4 param_2_00,ZombieLaneChangingSubsystem *this,
          SharkMinion *param_1,undefined4 param_2,undefined4 param_6)

{
  undefined4 uVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  ZombieLaneChangingRecord aZStack_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieLaneChangingRecord::ZombieLaneChangingRecord(aZStack_30);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)aZStack_30,(RtWeakPtrBase *)aRStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  local_28 = SharkMinion::getRow(param_1);
  local_c = 0;
  local_20 = 0;
  local_24 = param_2;
  local_1c = param_3;
  local_18 = param_6;
  local_14 = param_3;
  local_10 = param_2_00;
  uVar1 = ForceLaneChange(this,aZStack_30);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aZStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

