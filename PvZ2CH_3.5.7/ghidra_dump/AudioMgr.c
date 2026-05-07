// Class: AudioMgr


/* AudioMgr::AudioMgr() */

void __thiscall AudioMgr::AudioMgr(AudioMgr *this)

{
  Sexy::LazySingleton<AudioMgr>::LazySingleton((LazySingleton<AudioMgr> *)this);
  *(undefined ***)this = &PTR__AudioMgr_066085d0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x10));
  LocklessQueue<unsigned_int>::LocklessQueue((LocklessQueue<unsigned_int> *)(this + 0x40));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x58));
  return;
}


/* AudioMgr::~AudioMgr() */

void __thiscall AudioMgr::~AudioMgr(AudioMgr *this)

{
  *(undefined ***)this = &PTR__AudioMgr_066085d0;
  LocklessQueue<unsigned_int>::~LocklessQueue((LocklessQueue<unsigned_int> *)(this + 0x40));
  std::
  map<std::string_const,float,std::less<std::string_const>,std::allocator<std::pair<std::string_const,float>>>
  ::~map((map<std::string_const,float,std::less<std::string_const>,std::allocator<std::pair<std::string_const,float>>>
          *)(this + 0x10));
  Sexy::LazySingleton<AudioMgr>::~LazySingleton((LazySingleton<AudioMgr> *)this);
  return;
}


/* AudioMgr::~AudioMgr() */

void __thiscall AudioMgr::~AudioMgr(AudioMgr *this)

{
  ~AudioMgr(this);
  AK::FreeHook(this);
  return;
}


/* AudioMgr::Term() */

void __thiscall AudioMgr::Term(AudioMgr *this)

{
  Sexy::InteractiveSoundManager::Terminate(*(InteractiveSoundManager **)(gLawnApp + 0x648));
  *(undefined8 *)(this + 8) = 0;
  return;
}


/* AudioMgr::SendEvent(unsigned int, void*) */

void AudioMgr::SendEvent(uint param_1,void *param_2)

{
  if (*(long **)((ulong)param_1 + 8) != (long *)0x0) {
    (**(code **)(**(long **)((ulong)param_1 + 8) + 0x40))();
  }
  return;
}


/* AudioMgr::SendEvent(char const*, void*) */

undefined4 AudioMgr::SendEvent(char *param_1,void *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 != (void *)0x0) {
    uVar1 = 0;
    if ((*(char *)param_2 != '\0') && (*(long **)(param_1 + 8) != (long *)0x0)) {
      uVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x48))();
    }
  }
  return uVar1;
}


/* AudioMgr::SendEvent(std::string const&, void*) */

void AudioMgr::SendEvent(string *param_1,void *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_0547429c(param_2);
  SendEvent((char *)param_1,pvVar1);
  return;
}


/* AudioMgr::SendEventCallback(unsigned int, Sexy::InteractiveAudioCallbackType,
   Sexy::IInteractiveAudioCallbackListener*, void*) */

void AudioMgr::SendEventCallback(long param_1)

{
  if (*(long **)(param_1 + 8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 8) + 0x50))();
  }
  return;
}


/* AudioMgr::SendEventCallback(char const*, Sexy::InteractiveAudioCallbackType,
   Sexy::IInteractiveAudioCallbackListener*, void*) */

undefined4 AudioMgr::SendEventCallback(long param_1,char *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 != (char *)0x0) {
    uVar1 = 0;
    if ((*param_2 != '\0') && (*(long **)(param_1 + 8) != (long *)0x0)) {
      uVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x58))();
    }
  }
  return uVar1;
}


/* AudioMgr::SendEventCallback(std::string const&, Sexy::InteractiveAudioCallbackType,
   Sexy::IInteractiveAudioCallbackListener*, void*) */

void __thiscall
AudioMgr::SendEventCallback
          (AudioMgr *this,undefined8 param_1,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0547429c(param_1);
  SendEventCallback(this,uVar1,param_3,param_4,param_5);
  return;
}


/* AudioMgr::CancelEventCallback(unsigned int) */

void AudioMgr::CancelEventCallback(uint param_1)

{
  if (*(long **)((ulong)param_1 + 8) != (long *)0x0) {
    (**(code **)(**(long **)((ulong)param_1 + 8) + 0xc0))();
  }
  return;
}


/* AudioMgr::SetRTPCValue(unsigned int, double, void*) */

undefined1 AudioMgr::SetRTPCValue(uint param_1,double param_2,void *param_3)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (*(long **)((ulong)param_1 + 8) != (long *)0x0) {
    uVar1 = (**(code **)(**(long **)((ulong)param_1 + 8) + 0x60))((float)param_2);
  }
  return uVar1;
}


/* AudioMgr::SetRTPCValue(char const*, double, void*) */

undefined1 AudioMgr::SetRTPCValue(char *param_1,double param_2,void *param_3)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (*(long **)(param_1 + 8) != (long *)0x0) {
    uVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x68))((float)param_2);
  }
  return uVar1;
}


/* AudioMgr::SetRTPCValue(unsigned int, double) */

undefined1 __thiscall AudioMgr::SetRTPCValue(AudioMgr *this,uint param_1,double param_2)

{
  undefined1 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 8);
  uVar1 = 0;
  if (plVar2 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0x60))((float)param_2,plVar2,param_1,0);
  }
  return uVar1;
}


/* AudioMgr::SetRTPCValue(char const*, double) */

undefined1 __thiscall AudioMgr::SetRTPCValue(AudioMgr *this,char *param_1,double param_2)

{
  undefined1 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 8);
  uVar1 = 0;
  if (plVar2 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0x68))((float)param_2,plVar2,param_1,0);
  }
  return uVar1;
}


/* AudioMgr::SetState(unsigned int, unsigned int) */

undefined1 AudioMgr::SetState(uint param_1,uint param_2)

{
  undefined1 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)((ulong)param_1 + 8);
  uVar1 = 0;
  if (plVar2 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0x80))(plVar2,param_2);
  }
  return uVar1;
}


/* AudioMgr::SetState(char const*, char const*) */

undefined1 AudioMgr::SetState(char *param_1,char *param_2)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (*(long **)(param_1 + 8) != (long *)0x0) {
    uVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x88))();
  }
  return uVar1;
}


/* AudioMgr::RegisterForAudio(void*) */

void AudioMgr::RegisterForAudio(void *param_1)

{
  if (*(long **)((long)param_1 + 8) != (long *)0x0) {
    (**(code **)(**(long **)((long)param_1 + 8) + 0x90))();
  }
  return;
}


/* AudioMgr::UnregisterForAudio(void*) */

void AudioMgr::UnregisterForAudio(void *param_1)

{
  if (*(long **)((long)param_1 + 8) != (long *)0x0) {
    (**(code **)(**(long **)((long)param_1 + 8) + 0x98))();
  }
  return;
}


/* AudioMgr::SetObjectPosition(void*, Sexy::SexyVector2 const&) */

void AudioMgr::SetObjectPosition(void *param_1,SexyVector2 *param_2)

{
  if (*(long **)((long)param_1 + 8) != (long *)0x0) {
    (**(code **)(**(long **)((long)param_1 + 8) + 0xa0))();
  }
  return;
}


/* AudioMgr::SetListenerPosition(Sexy::SexyVector2 const&, int) */

void AudioMgr::SetListenerPosition(SexyVector2 *param_1,int param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0xa8))(plVar1,param_2);
  }
  return;
}


/* AudioMgr::SetSwitch(char const*, char const*, void*) */

undefined1 AudioMgr::SetSwitch(char *param_1,char *param_2,void *param_3)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (*(long **)(param_1 + 8) != (long *)0x0) {
    uVar1 = (**(code **)(**(long **)(param_1 + 8) + 0xd8))();
  }
  return uVar1;
}


/* AudioMgr::SendPositionalAudioValue(void*, Sexy::SexyVector3 const&) */

void __thiscall
AudioMgr::SendPositionalAudioValue(AudioMgr *this,void *param_1,SexyVector3 *param_2)

{
  float fVar1;
  
  fVar1 = *(float *)param_2 - *(float *)(this + 0x58);
  if (0.0 < fVar1) {
    fVar1 = (float)ClampFloat(fVar1 * 0.0025,0.0,1.0);
    SetRTPCValue((char *)this,(double)((fVar1 + 1.0) * 50.0),"Panner_RTPC");
    return;
  }
  fVar1 = (float)ClampFloat(-(fVar1 * 0.0025),0.0,1.0);
  SetRTPCValue((char *)this,(double)((1.0 - fVar1) * 50.0),"Panner_RTPC");
  return;
}


/* AudioMgr::AddDataToCallbackQueue(unsigned int) */

void __thiscall AudioMgr::AddDataToCallbackQueue(AudioMgr *this,uint param_1)

{
  uint local_4;
  
  local_4 = param_1;
  LocklessQueue<unsigned_int>::Produce((LocklessQueue<unsigned_int> *)(this + 0x40),&local_4);
  return;
}


/* AudioMgr::ReadDataFromCallbackQueue(unsigned int&) */

void __thiscall AudioMgr::ReadDataFromCallbackQueue(AudioMgr *this,uint *param_1)

{
  LocklessQueue<unsigned_int>::Consume((LocklessQueue<unsigned_int> *)(this + 0x40),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AudioMgr::BroadcastCallbackMessages() */

void __thiscall AudioMgr::BroadcastCallbackMessages(AudioMgr *this)

{
  char cVar1;
  uint local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  while( true ) {
    cVar1 = ReadDataFromCallbackQueue(this,&local_c);
    if (cVar1 == '\0') break;
    if (local_c == 0x100) {
      MessageRouter::Broadcast((_func_void *)gMessageRouter);
    }
    else if (local_c == 0x200) {
      MessageRouter::Broadcast((_func_void *)gMessageRouter);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AudioMgr::OnLevelEnded() */

void __thiscall AudioMgr::OnLevelEnded(AudioMgr *this)

{
  std::
  map<std::string_const,float,std::less<std::string_const>,std::allocator<std::pair<std::string_const,float>>>
  ::clear((map<std::string_const,float,std::less<std::string_const>,std::allocator<std::pair<std::string_const,float>>>
           *)(this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AudioMgr::SendEventThrottled(std::string const&, float, void*) */

void AudioMgr::SendEventThrottled(string *param_1,float param_2,void *param_3)

{
  map<std::string_const,float,std::less<std::string_const>,std::allocator<std::pair<std::string_const,float>>>
  *this;
  bool bVar1;
  float *pfVar2;
  undefined8 uVar3;
  long lVar4;
  void *pvVar5;
  float fVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(param_1 + 8) == 0) {
    uVar3 = 0;
  }
  else {
    this = (map<std::string_const,float,std::less<std::string_const>,std::allocator<std::pair<std::string_const,float>>>
            *)(param_1 + 0x10);
    local_18 = std::
               map<std::string_const,float,std::less<std::string_const>,std::allocator<std::pair<std::string_const,float>>>
               ::find(this,param_3);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (bVar1) {
      fVar6 = (float)PVZ_T();
      lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      uVar3 = 0;
      if (*(float *)(lVar4 + 8) < fVar6) {
        fVar6 = (float)PVZ_T();
        *(float *)(lVar4 + 8) = fVar6 + param_2;
        pvVar5 = (void *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                   ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)
                                    &local_18);
        uVar3 = SendEvent(param_1,pvVar5);
      }
    }
    else {
      pfVar2 = (float *)std::
                        map<std::string_const,float,std::less<std::string_const>,std::allocator<std::pair<std::string_const,float>>>
                        ::operator[](this,param_3);
      fVar6 = (float)PVZ_T();
      *pfVar2 = fVar6 + param_2;
      uVar3 = SendEvent(param_1,param_3);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AudioMgr::Init() */

void __thiscall AudioMgr::Init(AudioMgr *this)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  string *psVar4;
  int extraout_w1;
  RtWeakPtr<Sexy::SoundResource> aRStack_d0 [8];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  string asStack_b0 [8];
  undefined8 local_a8;
  string asStack_a0 [32];
  InteractiveSoundManagerConfig aIStack_80 [24];
  vector<std::string,std::allocator<std::string>> avStack_68 [24];
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  amStack_50 [56];
  char *local_18;
  char *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined8 *)(this + 8) = *(undefined8 *)(gLawnApp + 0x18);
  Sexy::InteractiveSoundManagerConfig::InteractiveSoundManagerConfig(aIStack_80);
  local_18 = "SFX_Volume_RTPC";
  local_10 = "Music_Volume_RTPC";
  std::string::string(asStack_a0,"WiseAlwaysLoaded");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)aIStack_80,asStack_a0);
  std::string::~string(asStack_a0);
  nop();
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(asStack_a0,uVar2,0x19);
  bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)asStack_a0);
  if (bVar1) {
    do {
      Sexy::RtDbTable::Iterator::operator*((Iterator *)asStack_a0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_d0,(RtWeakPtrBase *)&local_a8);
      Sexy::RtId::~RtId((RtId *)&local_a8);
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d0);
      local_c8 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(lVar3 + 0x10));
      while( true ) {
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d0);
        local_a8 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(lVar3 + 0x10));
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_c8,(__normal_iterator *)&local_a8)
        ;
        if (!bVar1) break;
        lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c8);
        std::vector<std::string,std::allocator<std::string>>::push_back
                  (avStack_68,(string *)(lVar3 + 8));
        lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c8);
        local_c0 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(lVar3 + 0x10));
        while( true ) {
          lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c8);
          local_a8 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(lVar3 + 0x10));
          bVar1 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_c0,(__normal_iterator *)&local_a8);
          if (!bVar1) break;
          psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c0)
          ;
          local_b8 = std::
                     map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                     ::find(amStack_50,psVar4);
          local_a8 = std::
                     map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)amStack_50);
          bVar1 = eastl::operator!=((rbtree_iterator *)&local_b8,(rbtree_iterator *)&local_a8);
          if (!bVar1) {
            psVar4 = (string *)
                     std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c0);
            uVar2 = std::
                    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                    ::operator[](amStack_50,psVar4);
            psVar4 = (string *)
                     std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c8);
            std::operator+(psVar4,"/");
            lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c8);
            std::operator+(asStack_b0,(string *)(lVar3 + 8));
            FUN_05474278(uVar2,(RtId *)&local_a8);
            std::string::~string((string *)&local_a8);
            std::string::~string(asStack_b0);
          }
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_c0);
        }
        __gnu_cxx::
        __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
        ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                      *)&local_c8);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d0);
      Sexy::RtDbTable::Iterator::operator++((Iterator *)asStack_a0,extraout_w1);
      bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)asStack_a0);
    } while (bVar1);
  }
  Sexy::RtDbTable::Iterator::~Iterator((Iterator *)asStack_a0);
  Sexy::InteractiveSoundManager::Initialize
            (*(InteractiveSoundManager **)(gLawnApp + 0x648),aIStack_80);
  Sexy::InteractiveSoundManagerConfig::~InteractiveSoundManagerConfig(aIStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

