// Class: ZombieMechDiscoSubsystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMechDiscoSubsystem::StaticClassInit() */

void ZombieMechDiscoSubsystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieMechDiscoSubsystem");
    (*pcVar2)(plVar1,asStack_10,FUN_046a0008,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieMechDiscoSubsystem::StaticGetClass() */

long * ZombieMechDiscoSubsystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieMechDiscoSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieMechDiscoSubsystem::GetClass() const */

long * ZombieMechDiscoSubsystem::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieMechDiscoSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieMechDiscoSubsystem::ZombieMechDiscoSubsystem() */

void __thiscall ZombieMechDiscoSubsystem::ZombieMechDiscoSubsystem(ZombieMechDiscoSubsystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_068a86a0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* ZombieMechDiscoSubsystem::StaticNew() */

ZombieMechDiscoSubsystem * ZombieMechDiscoSubsystem::StaticNew(void)

{
  ZombieMechDiscoSubsystem *this;
  
  this = ::operator_new(0x30);
  ZombieMechDiscoSubsystem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMechDiscoSubsystem::registerForEvents() */

void __thiscall ZombieMechDiscoSubsystem::registerForEvents(ZombieMechDiscoSubsystem *this)

{
  undefined *puVar1;
  long lVar2;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLevelEnded);
  Sexy::Delegate0::Delegate0<ZombieMechDiscoSubsystem,void(ZombieMechDiscoSubsystem::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::LevelEnded,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDestroyed);
  local_80 = local_58;
  local_90 = local_68;
  uStack_88 = uStack_60;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<ZombieMechDiscoSubsystem,void(ZombieMechDiscoSubsystem::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieDestroyed,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDied);
  local_b0 = local_50;
  uStack_a8 = uStack_48;
  local_a0 = local_40;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<ZombieMechDiscoSubsystem,void(ZombieMechDiscoSubsystem::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_b0);
  this[0x28] = (ZombieMechDiscoSubsystem)0x0;
  lVar2 = ___stack_chk_guard;
  this[0x2a] = (ZombieMechDiscoSubsystem)0x0;
  this[0x29] = (ZombieMechDiscoSubsystem)0x0;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieMechDiscoSubsystem::~ZombieMechDiscoSubsystem() */

void __thiscall ZombieMechDiscoSubsystem::~ZombieMechDiscoSubsystem(ZombieMechDiscoSubsystem *this)

{
  *(undefined ***)this = &PTR_GetClass_068a86a0;
  std::vector<Sexy::RtWeakPtr<ZombieMechDisco>,std::allocator<Sexy::RtWeakPtr<ZombieMechDisco>>>::
  ~vector((vector<Sexy::RtWeakPtr<ZombieMechDisco>,std::allocator<Sexy::RtWeakPtr<ZombieMechDisco>>>
           *)(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* ZombieMechDiscoSubsystem::~ZombieMechDiscoSubsystem() */

void __thiscall ZombieMechDiscoSubsystem::~ZombieMechDiscoSubsystem(ZombieMechDiscoSubsystem *this)

{
  ~ZombieMechDiscoSubsystem(this);
  AK::FreeHook(this);
  return;
}


/* ZombieMechDiscoSubsystem::onLevelEnded() */

void __thiscall ZombieMechDiscoSubsystem::onLevelEnded(ZombieMechDiscoSubsystem *this)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_Zomb_Future_Disco_Music_Stop");
  this[0x28] = (ZombieMechDiscoSubsystem)0x0;
  return;
}


/* ZombieMechDiscoSubsystem::updateAudioTracks() */

void __thiscall ZombieMechDiscoSubsystem::updateAudioTracks(ZombieMechDiscoSubsystem *this)

{
  long lVar1;
  char *pcVar2;
  
  if (this[0x28] == (ZombieMechDiscoSubsystem)0x0) {
    lVar1 = FUN_0469ecf8(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
    if ((lVar1 != 0) && (this[0x2a] != (ZombieMechDiscoSubsystem)0x0)) {
      this[0x28] = (ZombieMechDiscoSubsystem)0x1;
    }
  }
  else {
    lVar1 = FUN_0469ecf8(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
    if (lVar1 == 0) {
      pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar2,"Play_Zomb_Future_Disco_Music_Stop");
      this[0x28] = (ZombieMechDiscoSubsystem)0x0;
      return;
    }
  }
  return;
}


/* ZombieMechDiscoSubsystem::Update() */

void __thiscall ZombieMechDiscoSubsystem::Update(ZombieMechDiscoSubsystem *this)

{
  char cVar1;
  
  if (this[0x2a] == (ZombieMechDiscoSubsystem)0x0) {
    cVar1 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0));
    if (cVar1 != '\0') {
      this[0x2a] = (ZombieMechDiscoSubsystem)0x1;
      updateAudioTracks(this);
      return;
    }
  }
  else {
    cVar1 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0));
    if (cVar1 == '\0') {
      this[0x2a] = (ZombieMechDiscoSubsystem)0x0;
      updateAudioTracks(this);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMechDiscoSubsystem::onZombieDestroyed(Zombie*) */

void __thiscall
ZombieMechDiscoSubsystem::onZombieDestroyed(ZombieMechDiscoSubsystem *this,Zombie *param_1)

{
  int iVar1;
  RtWeakPtr *this_00;
  ResourceInfo *pRVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = 0;
  do {
    uVar5 = *(undefined8 *)(this + 0x10);
    iVar1 = (int)uVar4;
    uVar3 = FUN_0469ecf8(uVar5,*(undefined8 *)(this + 0x18));
    if (uVar3 <= uVar4) goto LAB_046a0384;
    this_00 = (RtWeakPtr *)FUN_0469ed04(uVar5,uVar4);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    uVar4 = uVar4 + 1;
  } while (param_1 != (Zombie *)pRVar2);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x10));
  local_18 = __gnu_cxx::
             __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
             ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                          *)&local_20,(long)iVar1);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  std::vector<Sexy::RtWeakPtr<ZombieMechDisco>,std::allocator<Sexy::RtWeakPtr<ZombieMechDisco>>>::
  erase((vector<Sexy::RtWeakPtr<ZombieMechDisco>,std::allocator<Sexy::RtWeakPtr<ZombieMechDisco>>> *
        )(this + 0x10),local_10);
  updateAudioTracks(this);
LAB_046a0384:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMechDiscoSubsystem::onZombieDied(Zombie*, DamageInfo const*) */

void ZombieMechDiscoSubsystem::onZombieDied(Zombie *param_1,DamageInfo *param_2)

{
  int iVar1;
  RtWeakPtr *this;
  ResourceInfo *pRVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = 0;
  do {
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    iVar1 = (int)uVar4;
    uVar3 = FUN_0469ecf8(uVar5,*(undefined8 *)(param_1 + 0x18));
    if (uVar3 <= uVar4) goto LAB_046a0464;
    this = (RtWeakPtr *)FUN_0469ed04(uVar5,uVar4);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
    uVar4 = uVar4 + 1;
  } while (param_2 != (DamageInfo *)pRVar2);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x10));
  local_18 = __gnu_cxx::
             __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
             ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                          *)&local_20,(long)iVar1);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  std::vector<Sexy::RtWeakPtr<ZombieMechDisco>,std::allocator<Sexy::RtWeakPtr<ZombieMechDisco>>>::
  erase((vector<Sexy::RtWeakPtr<ZombieMechDisco>,std::allocator<Sexy::RtWeakPtr<ZombieMechDisco>>> *
        )(param_1 + 0x10),local_10);
  updateAudioTracks((ZombieMechDiscoSubsystem *)param_1);
LAB_046a0464:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMechDiscoSubsystem::AssociateWithSubSystem(Sexy::RtWeakPtr<Sexy::RtObject>) */

void __thiscall
ZombieMechDiscoSubsystem::AssociateWithSubSystem(ZombieMechDiscoSubsystem *this,RtWeakPtr *param_2)

{
  bool bVar1;
  RtObject *this_00;
  char *pcVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if (bVar1) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    bVar1 = Sexy::RtObject::IsA<ZombieMechDisco>(this_00);
    if (bVar1) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
      std::vector<Sexy::RtWeakPtr<ZombieMechDisco>,std::allocator<Sexy::RtWeakPtr<ZombieMechDisco>>>
      ::push_back((vector<Sexy::RtWeakPtr<ZombieMechDisco>,std::allocator<Sexy::RtWeakPtr<ZombieMechDisco>>>
                   *)(this + 0x10),(RtWeakPtr *)aRStack_10);
      if (this[0x29] == (ZombieMechDiscoSubsystem)0x0) {
        this[0x29] = (ZombieMechDiscoSubsystem)0x1;
        pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar2,"Play_Zomb_Future_Disco_Intro");
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
  }
  updateAudioTracks(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

