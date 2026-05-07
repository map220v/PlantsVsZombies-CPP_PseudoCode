// Class: HeianSmokeBombSubsystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianSmokeBombSubsystem::StaticClassInit() */

void HeianSmokeBombSubsystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"HeianSmokeBombSubsystem");
    (*pcVar2)(plVar1,asStack_10,FUN_03d27124,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeianSmokeBombSubsystem::StaticGetClass() */

long * HeianSmokeBombSubsystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HeianSmokeBombSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeianSmokeBombSubsystem::GetClass() const */

long * HeianSmokeBombSubsystem::GetClass(void)

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
  (*pcVar3)(plVar1,"HeianSmokeBombSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeianSmokeBombSubsystem::SpawnNinjia(ZombieDropData const&) */

void __thiscall
HeianSmokeBombSubsystem::SpawnNinjia(HeianSmokeBombSubsystem *this,ZombieDropData *param_1)

{
  Zombie *this_00;
  
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x10));
  nop();
  if (this_00 != (Zombie *)0x0) {
    (**(code **)(*(long *)this_00 + 0x80))();
    Zombie::SetIsTargetable(this_00,true);
    ZombieZombossExplosive::tryBigSummonAction((ZombieZombossExplosive *)this_00);
    (**(code **)(*(long *)this_00 + 0x78))(this_00,param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianSmokeBombSubsystem::onSmokeBombExploded(HeianSmokeBomb*) */

void HeianSmokeBombSubsystem::onSmokeBombExploded(HeianSmokeBomb *param_1)

{
  bool bVar1;
  char cVar2;
  RtWeakPtr *this;
  DailyAchievementInfo *this_00;
  ZombieDropData *pZVar3;
  long *plVar4;
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x10));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(param_1 + 0x10));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    this = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
    if ((bVar1) && (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this), cVar2 != '\0')) {
      ToolPacketData::GetProps();
      cVar2 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)this,(RtWeakPtrBase *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      if (cVar2 != '\0') {
        this_00 = (DailyAchievementInfo *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
        pZVar3 = (ZombieDropData *)DailyAchievementInfo::getSpecificPlantPool(this_00);
        SpawnNinjia((HeianSmokeBombSubsystem *)param_1,pZVar3);
        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this);
        (**(code **)(*plVar4 + 0x48))();
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


/* HeianSmokeBombSubsystem::HeianSmokeBombSubsystem() */

void __thiscall HeianSmokeBombSubsystem::HeianSmokeBombSubsystem(HeianSmokeBombSubsystem *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_067661c0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSmokeBombExploded);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<HeianSmokeBomb*,Sexy::CBMemberTranslatorX<HeianSmokeBombSubsystem,void(HeianSmokeBombSubsystem::*)(HeianSmokeBomb*)>>
            ((MessageRouter *)puVar1,Message::SmokeBombExploded,&local_40);
  return;
}


/* HeianSmokeBombSubsystem::StaticNew() */

HeianSmokeBombSubsystem * HeianSmokeBombSubsystem::StaticNew(void)

{
  HeianSmokeBombSubsystem *this;
  
  this = ::operator_new(0x28);
  HeianSmokeBombSubsystem(this);
  return this;
}


/* HeianSmokeBombSubsystem::~HeianSmokeBombSubsystem() */

void __thiscall HeianSmokeBombSubsystem::~HeianSmokeBombSubsystem(HeianSmokeBombSubsystem *this)

{
  *(undefined ***)this = &PTR_GetClass_067661c0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<Sexy::RtWeakPtr<HeianSmokeBomb>,std::allocator<Sexy::RtWeakPtr<HeianSmokeBomb>>>::
  ~vector((vector<Sexy::RtWeakPtr<HeianSmokeBomb>,std::allocator<Sexy::RtWeakPtr<HeianSmokeBomb>>> *
          )(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* HeianSmokeBombSubsystem::~HeianSmokeBombSubsystem() */

void __thiscall HeianSmokeBombSubsystem::~HeianSmokeBombSubsystem(HeianSmokeBombSubsystem *this)

{
  ~HeianSmokeBombSubsystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianSmokeBombSubsystem::ActivateSmokeBomb(bool, float, int, int, ZombieDropData const&) */

void __thiscall
HeianSmokeBombSubsystem::ActivateSmokeBomb
          (HeianSmokeBombSubsystem *this,bool param_1,float param_2,int param_3,int param_4,
          ZombieDropData *param_5)

{
  HeianSmokeBomb *this_00;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GameObject::Create<HeianSmokeBomb>();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  this_00 = (HeianSmokeBomb *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  HeianSmokeBomb::Activate(this_00,param_1,param_2,param_3,param_4,param_5);
  std::vector<Sexy::RtWeakPtr<HeianSmokeBomb>,std::allocator<Sexy::RtWeakPtr<HeianSmokeBomb>>>::
  push_back((vector<Sexy::RtWeakPtr<HeianSmokeBomb>,std::allocator<Sexy::RtWeakPtr<HeianSmokeBomb>>>
             *)(this + 0x10),(RtWeakPtr *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

