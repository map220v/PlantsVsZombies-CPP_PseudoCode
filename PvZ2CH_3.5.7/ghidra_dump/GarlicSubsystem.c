// Class: GarlicSubsystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GarlicSubsystem::StaticClassInit() */

void GarlicSubsystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"GarlicSubsystem");
    (*pcVar3)(plVar2,asStack_10,FUN_04164f30,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"GarlicAffectedZombieRecord");
    (*pcVar3)(plVar2,asStack_10,FUN_04165094,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GarlicSubsystem::StaticGetClass() */

long * GarlicSubsystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GarlicSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GarlicSubsystem::GetClass() const */

long * GarlicSubsystem::GetClass(void)

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
  (*pcVar3)(plVar1,"GarlicSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GarlicSubsystem::shouldStartRegretting(GarlicAffectedZombieRecord&) */

bool __thiscall
GarlicSubsystem::shouldStartRegretting(GarlicSubsystem *this,GarlicAffectedZombieRecord *param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(int *)(param_1 + 0x4c) == 0) {
    bVar1 = *(float *)(param_1 + 0x18) <= *(float *)(param_1 + 0x48);
  }
  return bVar1;
}


/* GarlicSubsystem::shouldStartMoving(GarlicAffectedZombieRecord&) */

bool __thiscall
GarlicSubsystem::shouldStartMoving(GarlicSubsystem *this,GarlicAffectedZombieRecord *param_1)

{
  if (*(int *)(param_1 + 0x4c) != 1) {
    return false;
  }
  return *(float *)(param_1 + 0x1c) <= *(float *)(param_1 + 0x48);
}


/* GarlicSubsystem::shouldStartBeingStuned(GarlicAffectedZombieRecord&) */

bool __thiscall
GarlicSubsystem::shouldStartBeingStuned(GarlicSubsystem *this,GarlicAffectedZombieRecord *param_1)

{
  if (*(int *)(param_1 + 0x4c) != 2) {
    return false;
  }
  return *(float *)(param_1 + 0x20) <= *(float *)(param_1 + 0x48);
}


/* GarlicSubsystem::shouldStartBeingIndifferent(GarlicAffectedZombieRecord&) */

bool __thiscall
GarlicSubsystem::shouldStartBeingIndifferent
          (GarlicSubsystem *this,GarlicAffectedZombieRecord *param_1)

{
  if (*(int *)(param_1 + 0x4c) != 3) {
    return false;
  }
  return *(float *)(param_1 + 0x24) <= *(float *)(param_1 + 0x48);
}


/* GarlicSubsystem::shouldRemoveZombie(GarlicAffectedZombieRecord&) */

bool __thiscall
GarlicSubsystem::shouldRemoveZombie(GarlicSubsystem *this,GarlicAffectedZombieRecord *param_1)

{
  if ((*(int *)(param_1 + 0x4c) == 4) && (*(float *)(param_1 + 0x28) <= *(float *)(param_1 + 0x48)))
  {
    return true;
  }
  return *(int *)(param_1 + 0x4c) == 5;
}


/* GarlicSubsystem::setState(GarlicAffectedZombieRecord&, GarlicEffectedZombieState) */

void __thiscall GarlicSubsystem::setState(undefined8 param_1_00,long param_1,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x4c) = param_3;
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}


/* GarlicSubsystem::shouldMoveUp() */

bool GarlicSubsystem::shouldMoveUp(void)

{
  int iVar1;
  
  iVar1 = RandRangeInt(0,1);
  return iVar1 != 0;
}


/* GarlicSubsystem::isArmoredPharaoh(Sexy::RtWeakPtr<Zombie>) */

bool GarlicSubsystem::isArmoredPharaoh(RtWeakPtr<Sexy::ResourceInfo> *param_1)

{
  bool bVar1;
  bool bVar2;
  Zombie *this;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar3;
  float fVar4;
  
  this = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  bVar2 = std::operator==((string *)(lVar3 + 8),"pharaoh");
  bVar1 = false;
  if (bVar2) {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
    fVar4 = (float)FUN_04161efc(*(undefined4 *)(lVar3 + 0x2a8));
    bVar1 = 0.0 < fVar4;
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GarlicSubsystem::ZombieIsValid(Sexy::RtWeakPtr<Zombie>) */

void GarlicSubsystem::ZombieIsValid(RtMixedPtrBase *param_1)

{
  char cVar1;
  byte bVar2;
  long *plVar3;
  Zombie *pZVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_1);
  if (cVar1 != '\0') {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    cVar1 = (**(code **)(*plVar3 + 0x328))();
    if (cVar1 == '\0') {
      pZVar4 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
      cVar1 = Zombie::HasFogImmune(pZVar4);
      if (cVar1 == '\0') {
        plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
        cVar1 = (**(code **)(*plVar3 + 0x4d8))();
        if (cVar1 == '\0') {
          plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
          cVar1 = (**(code **)(*plVar3 + 0x508))();
          if (cVar1 == '\0') {
            pZVar4 = (Zombie *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
            cVar1 = Zombie::IsBerserk(pZVar4);
            if (cVar1 == '\0') {
              plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                         ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
              cVar1 = (**(code **)(*plVar3 + 0x330))();
              if (cVar1 == '\0') {
                Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_1)
                ;
                bVar2 = isArmoredPharaoh(aRStack_10);
                bVar2 = bVar2 ^ 1;
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
                goto LAB_04163adc;
              }
            }
          }
        }
      }
    }
  }
  bVar2 = 0;
LAB_04163adc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GarlicSubsystem::ZombieNotValid(Sexy::RtWeakPtr<Zombie>) */

void GarlicSubsystem::ZombieNotValid(RtWeakPtrBase *param_1)

{
  byte bVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_1);
  bVar1 = ZombieIsValid(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1 ^ 1);
}


/* GarlicSubsystem::stunZombieInRecord(GarlicAffectedZombieRecord&, float) */

void __thiscall
GarlicSubsystem::stunZombieInRecord
          (GarlicSubsystem *this,GarlicAffectedZombieRecord *param_1,float param_2)

{
  undefined8 uVar1;
  undefined4 in_register_00005004;
  
  if (0.0 < param_2) {
    uVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    Zombie::ApplyCondition((Zombie *)CONCAT44(in_register_00005004,param_2),0,uVar1,2,1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GarlicSubsystem::findRecordFor(Sexy::RtWeakPtr<Zombie>) */

void __thiscall GarlicSubsystem::findRecordFor(GarlicSubsystem *this,RtWeakPtrBase *param_2)

{
  char cVar1;
  bool bVar2;
  RtWeakPtrBase *pRVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x10));
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x10));
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) {
      uVar4 = 0;
LAB_041642f8:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar4);
    }
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = Sexy::RtWeakPtrBase::operator==(param_2,pRVar3);
    if (cVar1 != '\0') {
      uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      goto LAB_041642f8;
    }
    std::move_iterator<RappellingZombieInfo*>::operator++
              ((move_iterator<RappellingZombieInfo*> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GarlicSubsystem::IsZombieIndifferent(Sexy::RtWeakPtr<Zombie>) */

void __thiscall GarlicSubsystem::IsZombieIndifferent(GarlicSubsystem *this,RtWeakPtrBase *param_2)

{
  bool bVar1;
  long lVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  lVar2 = findRecordFor(this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(lVar2 + 0x4c) != 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GarlicSubsystem::shouldAdd(Zombie*) */

void __thiscall GarlicSubsystem::shouldAdd(GarlicSubsystem *this,Zombie *param_1)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  bVar1 = false;
  local_8 = ___stack_chk_guard;
  cVar2 = Zombie::IsControlled(param_1);
  if (cVar2 == '\0') {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    lVar3 = findRecordFor(this,aRStack_10);
    bVar1 = lVar3 == 0;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GarlicSubsystem::RemoveZombie(Zombie*) */

void GarlicSubsystem::RemoveZombie(Zombie *param_1)

{
  long lVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  lVar1 = findRecordFor((GarlicSubsystem *)param_1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (lVar1 != 0) {
    setState((GarlicSubsystem *)param_1,lVar1,5);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GarlicSubsystem::spawnGarlicStinkLinesOverZombie(Zombie*, float) */

void __thiscall
GarlicSubsystem::spawnGarlicStinkLinesOverZombie
          (GarlicSubsystem *this,Zombie *param_1,float param_2)

{
  Effect_GarlicStinkLines *this_00;
  
  this_00 = Board::AddEffect<Effect_GarlicStinkLines>(*(Board **)(gLawnApp + 0x9f0));
  Effect_GarlicStinkLines::StartStinkLines(this_00,param_1,param_2);
  return;
}


/* GarlicSubsystem::setupZombieStunnedAnimation(GarlicAffectedZombieRecord&) */

void __thiscall
GarlicSubsystem::setupZombieStunnedAnimation
          (GarlicSubsystem *this,GarlicAffectedZombieRecord *param_1)

{
  Zombie *pZVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = *(float *)(param_1 + 0x20);
  fVar2 = *(float *)(param_1 + 0x24);
  fVar4 = *(float *)(param_1 + 0x1c);
  pZVar1 = (Zombie *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  spawnGarlicStinkLinesOverZombie(this,pZVar1,fVar3 + fVar2 + fVar4);
  return;
}


/* GarlicSubsystem::setupZombiePoisonedAnimation(GarlicAffectedZombieRecord&) */

void __thiscall
GarlicSubsystem::setupZombiePoisonedAnimation
          (GarlicSubsystem *this,GarlicAffectedZombieRecord *param_1)

{
  Effect_PoisonGas *this_00;
  Zombie *pZVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x1c);
  this_00 = Board::AddEffect<Effect_PoisonGas>(*(Board **)(gLawnApp + 0x9f0));
  pZVar1 = (Zombie *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  Effect_PoisonGas::PoisonZombie(this_00,pZVar1,fVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GarlicSubsystem::moveZombieByRows(GarlicAffectedZombieRecord&, int) */

void __thiscall
GarlicSubsystem::moveZombieByRows
          (GarlicSubsystem *this,GarlicAffectedZombieRecord *param_1,int param_2)

{
  SharkMinion *pSVar1;
  ZombieLaneChangingSubsystem *this_00;
  ZombieLaneChangingRecord aZStack_30 [8];
  undefined4 local_28;
  int local_24;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieLaneChangingRecord::ZombieLaneChangingRecord(aZStack_30);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)aZStack_30,(RtWeakPtr *)param_1);
  pSVar1 = (SharkMinion *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aZStack_30);
  local_28 = SharkMinion::getRow(pSVar1);
  pSVar1 = (SharkMinion *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aZStack_30);
  local_24 = SharkMinion::getRow(pSVar1);
  local_14 = *(undefined4 *)(param_1 + 0x20);
  local_24 = local_24 + param_2;
  local_10 = *(undefined4 *)(param_1 + 0x28);
  local_18 = 4;
  this_00 = Board::GetGameSubSystem<ZombieLaneChangingSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  ZombieLaneChangingSubsystem::ForceLaneChange(this_00,aZStack_30);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aZStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GarlicSubsystem::GarlicSubsystem() */

void __thiscall GarlicSubsystem::GarlicSubsystem(GarlicSubsystem *this)

{
  undefined8 uVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_067f3460;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  uVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::RtName::RtName(aRStack_18,L"GarlicDefault");
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,uVar1,5,aRStack_18);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x28),(RtWeakPtr *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GarlicSubsystem::StaticNew() */

GarlicSubsystem * GarlicSubsystem::StaticNew(void)

{
  GarlicSubsystem *this;
  
  this = ::operator_new(0x30);
  GarlicSubsystem(this);
  return this;
}


/* GarlicSubsystem::~GarlicSubsystem() */

void __thiscall GarlicSubsystem::~GarlicSubsystem(GarlicSubsystem *this)

{
  *(undefined ***)this = &PTR_GetClass_067f3460;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  std::vector<GarlicAffectedZombieRecord,std::allocator<GarlicAffectedZombieRecord>>::~vector
            ((vector<GarlicAffectedZombieRecord,std::allocator<GarlicAffectedZombieRecord>> *)
             (this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* GarlicSubsystem::~GarlicSubsystem() */

void __thiscall GarlicSubsystem::~GarlicSubsystem(GarlicSubsystem *this)

{
  ~GarlicSubsystem(this);
  AK::FreeHook(this);
  return;
}


/* GarlicSubsystem::makeZombieRegretChoices(GarlicAffectedZombieRecord&) */

void __thiscall
GarlicSubsystem::makeZombieRegretChoices(GarlicSubsystem *this,GarlicAffectedZombieRecord *param_1)

{
  string *psVar1;
  undefined8 uVar2;
  
  psVar1 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(psVar1,param_1 + 0x30);
  setupZombieStunnedAnimation(this,param_1);
  if (0.0 < *(float *)(param_1 + 0x1c)) {
    uVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                    /* WARNING: Load size is inaccurate */
    Zombie::ApplyCondition(*(Zombie **)(param_1 + 0x1c),0,uVar2,2,1);
    return;
  }
  return;
}


/* GarlicSubsystem::poisonZombie(GarlicAffectedZombieRecord&) */

void __thiscall
GarlicSubsystem::poisonZombie(GarlicSubsystem *this,GarlicAffectedZombieRecord *param_1)

{
  string *psVar1;
  undefined8 uVar2;
  
  psVar1 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(psVar1,param_1 + 0x30);
  setupZombiePoisonedAnimation(this,param_1);
  if (0.0 < *(float *)(param_1 + 0x1c)) {
    uVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                    /* WARNING: Load size is inaccurate */
    Zombie::ApplyCondition(*(Zombie **)(param_1 + 0x1c),0,uVar2,2,1);
    return;
  }
  return;
}


/* GarlicSubsystem::moveZombieUpOneRow(GarlicAffectedZombieRecord&) */

void __thiscall
GarlicSubsystem::moveZombieUpOneRow(GarlicSubsystem *this,GarlicAffectedZombieRecord *param_1)

{
  string *psVar1;
  
  psVar1 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(psVar1,param_1 + 0x38);
  moveZombieByRows(this,param_1,-1);
  return;
}


/* GarlicSubsystem::moveZombieDownOneRow(GarlicAffectedZombieRecord&) */

void __thiscall
GarlicSubsystem::moveZombieDownOneRow(GarlicSubsystem *this,GarlicAffectedZombieRecord *param_1)

{
  string *psVar1;
  
  psVar1 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(psVar1,param_1 + 0x40);
  moveZombieByRows(this,param_1,1);
  return;
}


/* GarlicSubsystem::moveZombieToNewLane(GarlicAffectedZombieRecord&) */

void __thiscall
GarlicSubsystem::moveZombieToNewLane(GarlicSubsystem *this,GarlicAffectedZombieRecord *param_1)

{
  char cVar1;
  char cVar2;
  Zombie *pZVar3;
  
  pZVar3 = (Zombie *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  cVar1 = ZombieLaneChangingSubsystem::CanZombieMoveUp(pZVar3);
  cVar2 = ZombieLaneChangingSubsystem::CanZombieMoveDown(pZVar3);
  if (cVar2 == '\0') {
    if (cVar1 == '\0') {
      return;
    }
LAB_04165a90:
    moveZombieUpOneRow(this,param_1);
    return;
  }
  if (cVar1 == '\0') {
    if (cVar2 == '\0') {
      return;
    }
  }
  else {
    cVar1 = shouldMoveUp();
    if (cVar1 != '\0') goto LAB_04165a90;
  }
  moveZombieDownOneRow(this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GarlicSubsystem::updateRecord(GarlicAffectedZombieRecord&) */

void __thiscall
GarlicSubsystem::updateRecord(GarlicSubsystem *this,GarlicAffectedZombieRecord *param_1)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar4 = (float)PVZ_Dt();
  *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x48) + fVar4;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)param_1);
  cVar1 = ZombieNotValid(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (cVar1 == '\0') {
    cVar1 = shouldStartRegretting(this,param_1);
    if (cVar1 == '\0') {
      cVar1 = shouldStartMoving(this,param_1);
      if (cVar1 == '\0') {
        cVar1 = shouldStartBeingStuned(this,param_1);
        if (cVar1 == '\0') {
          cVar1 = shouldStartBeingIndifferent(this,param_1);
          if (cVar1 != '\0') {
            setState(this,param_1,4);
          }
        }
        else {
          setState(this,param_1,3);
          stunZombieInRecord(this,param_1,*(float *)(param_1 + 0x24));
        }
      }
      else {
        setState(this,param_1,2);
        moveZombieToNewLane(this,param_1);
      }
    }
    else {
      setState(this,param_1,1);
      if (*(int *)(param_1 + 0xc) < 3) {
        makeZombieRegretChoices(this,param_1);
      }
      else {
        poisonZombie(this,param_1);
      }
    }
  }
  else {
    setState(this,param_1,5);
  }
  if (((2 < *(int *)(param_1 + 0xc)) && (*(int *)(param_1 + 0x4c) == 1)) &&
     (plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)param_1), plVar2 != (long *)0x0))
  {
    fVar5 = *(float *)(param_1 + 0x10);
    fVar4 = (float)PVZ_Dt();
    uVar3 = operator|(0x100,8);
    uVar3 = operator|(uVar3,0x800000000000);
    Sexy::Point::Point(aPStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo
              ((DamageInfo *)(fVar4 * fVar5),local_70,local_6c,aRStack_68,uVar3,0,aPStack_78,0);
    (**(code **)(*plVar2 + 0x110))(plVar2,aRStack_68);
    DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GarlicSubsystem::Update() */

void __thiscall GarlicSubsystem::Update(GarlicSubsystem *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  GarlicAffectedZombieRecord *pGVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    while( true ) {
      if (!bVar1) {
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      pGVar3 = (GarlicAffectedZombieRecord *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      updateRecord(this,pGVar3);
      pGVar3 = (GarlicAffectedZombieRecord *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      cVar2 = shouldRemoveZombie(this,pGVar3);
      if (cVar2 == '\0') break;
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      std::vector<GarlicAffectedZombieRecord,std::allocator<GarlicAffectedZombieRecord>>::erase
                ((vector<GarlicAffectedZombieRecord,std::allocator<GarlicAffectedZombieRecord>> *)
                 this_00,local_10);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    }
    std::move_iterator<RappellingZombieInfo*>::operator++
              ((move_iterator<RappellingZombieInfo*> *)&local_18);
  } while( true );
}


/* GarlicSubsystem::AddZombie(GarlicAffectedZombieRecord&) */

void __thiscall
GarlicSubsystem::AddZombie(GarlicSubsystem *this,GarlicAffectedZombieRecord *param_1)

{
  char cVar1;
  Zombie *pZVar2;
  
  pZVar2 = (Zombie *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  cVar1 = shouldAdd(this,pZVar2);
  if (cVar1 == '\0') {
    return;
  }
  std::vector<GarlicAffectedZombieRecord,std::allocator<GarlicAffectedZombieRecord>>::push_back
            ((vector<GarlicAffectedZombieRecord,std::allocator<GarlicAffectedZombieRecord>> *)
             (this + 0x10),param_1);
  return;
}

