// Class: Sexy::InteractiveSoundManager


/* Sexy::InteractiveSoundManager::StopAll() */

void __thiscall Sexy::InteractiveSoundManager::StopAll(InteractiveSoundManager *this)

{
  (**(code **)(**(long **)(this + 0x30) + 0x48))(*(long **)(this + 0x30),"Stop_Master_Audio_Bus",0);
  return;
}


/* Sexy::InteractiveSoundManager::Update() */

void __thiscall Sexy::InteractiveSoundManager::Update(InteractiveSoundManager *this)

{
  if (*(code **)(**(long **)(this + 0x30) + 0x28) != IInteractiveAudioDriver::Update) {
    (**(code **)(**(long **)(this + 0x30) + 0x28))();
  }
  return;
}


/* Sexy::InteractiveSoundManager::PauseAll(bool) */

void __thiscall Sexy::InteractiveSoundManager::PauseAll(InteractiveSoundManager *this,bool param_1)

{
  char *pcVar1;
  
  if ((this[0x79] != (InteractiveSoundManager)0x0) &&
     (this[0x78] != (InteractiveSoundManager)param_1)) {
    this[0x78] = (InteractiveSoundManager)param_1;
    if (param_1) {
      pcVar1 = "Pause_Master_Audio_Bus";
    }
    else {
      pcVar1 = "Resume_Master_Audio_Bus";
    }
    (**(code **)(**(long **)(this + 0x30) + 0x48))(*(long **)(this + 0x30),pcVar1,0);
    Update(this);
    return;
  }
  return;
}


/* Sexy::InteractiveSoundManager::RegisterAudioGameObject(void*) */

void Sexy::InteractiveSoundManager::RegisterAudioGameObject(void *param_1)

{
  (**(code **)(**(long **)((long)param_1 + 0x30) + 0x90))(*(long **)((long)param_1 + 0x30));
  return;
}


/* Sexy::InteractiveSoundManager::UnregisterAudioGameObject(void*) */

void Sexy::InteractiveSoundManager::UnregisterAudioGameObject(void *param_1)

{
  (**(code **)(**(long **)((long)param_1 + 0x30) + 0x98))(*(long **)((long)param_1 + 0x30));
  return;
}


/* Sexy::InteractiveSoundManager::SendEvent(char const*, void*) */

void Sexy::InteractiveSoundManager::SendEvent(char *param_1,void *param_2)

{
  (**(code **)(**(long **)(param_1 + 0x30) + 0x48))(*(long **)(param_1 + 0x30));
  return;
}


/* Sexy::InteractiveSoundManager::SendEvent(unsigned int, void*) */

void Sexy::InteractiveSoundManager::SendEvent(uint param_1,void *param_2)

{
  (**(code **)(**(long **)((ulong)param_1 + 0x30) + 0x40))(*(long **)((ulong)param_1 + 0x30));
  return;
}


/* Sexy::InteractiveSoundManager::SendEventCallback(char const*, Sexy::InteractiveAudioCallbackType,
   Sexy::IInteractiveAudioCallbackListener*, void*) */

void Sexy::InteractiveSoundManager::SendEventCallback(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x30) + 0x58))(*(long **)(param_1 + 0x30));
  return;
}


/* Sexy::InteractiveSoundManager::SendEventCallback(unsigned int,
   Sexy::InteractiveAudioCallbackType, Sexy::IInteractiveAudioCallbackListener*, void*) */

void Sexy::InteractiveSoundManager::SendEventCallback(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x30) + 0x50))(*(long **)(param_1 + 0x30));
  return;
}


/* Sexy::InteractiveSoundManager::SetRTPCValue(char const*, float, void*) */

void Sexy::InteractiveSoundManager::SetRTPCValue(char *param_1,float param_2,void *param_3)

{
  (**(code **)(**(long **)(param_1 + 0x30) + 0x68))(*(long **)(param_1 + 0x30));
  return;
}


/* Sexy::InteractiveSoundManager::SetRTPCValue(unsigned int, float, void*) */

void Sexy::InteractiveSoundManager::SetRTPCValue(uint param_1,float param_2,void *param_3)

{
  (**(code **)(**(long **)((ulong)param_1 + 0x30) + 0x60))(*(long **)((ulong)param_1 + 0x30));
  return;
}


/* Sexy::InteractiveSoundManager::SetSfxVolume(float) */

void __thiscall
Sexy::InteractiveSoundManager::SetSfxVolume(InteractiveSoundManager *this,float param_1)

{
  if (*(uint *)(this + 0x3c) == 0) {
    return;
  }
  SetRTPCValue((uint)this,param_1 * 100.0,(void *)(ulong)*(uint *)(this + 0x3c));
  return;
}


/* Sexy::InteractiveSoundManager::SetMusicVolume(float) */

void __thiscall
Sexy::InteractiveSoundManager::SetMusicVolume(InteractiveSoundManager *this,float param_1)

{
  if (*(uint *)(this + 0x40) == 0) {
    return;
  }
  SetRTPCValue((uint)this,param_1 * 100.0,(void *)(ulong)*(uint *)(this + 0x40));
  return;
}


/* Sexy::InteractiveSoundManager::SetMasterVolume(float) */

void __thiscall
Sexy::InteractiveSoundManager::SetMasterVolume(InteractiveSoundManager *this,float param_1)

{
  if (*(uint *)(this + 0x38) == 0) {
    return;
  }
  SetRTPCValue((uint)this,param_1,(void *)(ulong)*(uint *)(this + 0x38));
  return;
}


/* Sexy::InteractiveSoundManager::GetRTPCValue(char const*, float&, void*) const */

void Sexy::InteractiveSoundManager::GetRTPCValue(char *param_1,float *param_2,void *param_3)

{
  (**(code **)(**(long **)(param_1 + 0x30) + 0x78))(*(long **)(param_1 + 0x30));
  return;
}


/* Sexy::InteractiveSoundManager::GetRTPCValue(unsigned int, float&, void*) const */

void Sexy::InteractiveSoundManager::GetRTPCValue(uint param_1,float *param_2,void *param_3)

{
  (**(code **)(**(long **)((ulong)param_1 + 0x30) + 0x70))(*(long **)((ulong)param_1 + 0x30));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::InteractiveSoundManager::GetSfxVolume() const */

void __thiscall Sexy::InteractiveSoundManager::GetSfxVolume(InteractiveSoundManager *this)

{
  char cVar1;
  float fVar2;
  float local_c;
  long local_8;
  
  fVar2 = 0.0;
  local_c = 0.0;
  local_8 = ___stack_chk_guard;
  if (*(uint *)(this + 0x3c) != 0) {
    fVar2 = 0.0;
    cVar1 = GetRTPCValue((uint)this,(float *)(ulong)*(uint *)(this + 0x3c),&local_c);
    if (cVar1 != '\0') {
      fVar2 = local_c * 0.01;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::InteractiveSoundManager::GetMusicVolume() const */

void __thiscall Sexy::InteractiveSoundManager::GetMusicVolume(InteractiveSoundManager *this)

{
  char cVar1;
  float fVar2;
  float local_c;
  long local_8;
  
  fVar2 = 0.0;
  local_c = 0.0;
  local_8 = ___stack_chk_guard;
  if (*(uint *)(this + 0x40) != 0) {
    fVar2 = 0.0;
    cVar1 = GetRTPCValue((uint)this,(float *)(ulong)*(uint *)(this + 0x40),&local_c);
    if (cVar1 == '\0') {
      fVar2 = local_c * 0.01;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::InteractiveSoundManager::GetMasterVolume() const */

void __thiscall Sexy::InteractiveSoundManager::GetMasterVolume(InteractiveSoundManager *this)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_c;
  long local_8;
  
  local_c = 0;
  local_8 = ___stack_chk_guard;
  uVar2 = 0;
  if (*(uint *)(this + 0x38) != 0) {
    cVar1 = GetRTPCValue((uint)this,(float *)(ulong)*(uint *)(this + 0x38),&local_c);
    uVar2 = 0;
    if (cVar1 == '\0') {
      uVar2 = local_c;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* Sexy::InteractiveSoundManager::SendEventRTPC(unsigned int, unsigned int, float, void*) */

undefined8
Sexy::InteractiveSoundManager::SendEventRTPC(uint param_1,uint param_2,float param_3,void *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 in_x3;
  long *plVar3;
  
  plVar3 = *(long **)((ulong)param_1 + 0x30);
  cVar1 = (**(code **)(*plVar3 + 0x60))(plVar3,(ulong)param_4 & 0xffffffff);
  uVar2 = 0;
  if (cVar1 != '\0') {
    plVar3 = *(long **)((ulong)param_1 + 0x30);
    uVar2 = (**(code **)(*plVar3 + 0x40))(plVar3,param_2,in_x3);
  }
  return uVar2;
}


/* Sexy::InteractiveSoundManager::SendEventRTPC(char const*, char const*, float, void*) */

undefined8
Sexy::InteractiveSoundManager::SendEventRTPC
          (char *param_1,char *param_2,float param_3,void *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 in_x3;
  
  cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x68))(*(long **)(param_1 + 0x30),param_4);
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x48))
                      (*(long **)(param_1 + 0x30),param_2,in_x3);
  }
  return uVar2;
}


/* Sexy::InteractiveSoundManager::CancelEventCallback(unsigned int) */

void Sexy::InteractiveSoundManager::CancelEventCallback(uint param_1)

{
  (**(code **)(**(long **)((ulong)param_1 + 0x30) + 0xc0))(*(long **)((ulong)param_1 + 0x30));
  return;
}


/* Sexy::InteractiveSoundManager::CancelEventCallbackByContext(void*) */

void Sexy::InteractiveSoundManager::CancelEventCallbackByContext(void *param_1)

{
  (**(code **)(**(long **)((long)param_1 + 0x30) + 200))(*(long **)((long)param_1 + 0x30));
  return;
}


/* Sexy::InteractiveSoundManager::GetRtpcIdFromString(char const*) const */

void Sexy::InteractiveSoundManager::GetRtpcIdFromString(char *param_1)

{
  (**(code **)(**(long **)(param_1 + 0x30) + 0xb0))(*(long **)(param_1 + 0x30));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::InteractiveSoundManager::Terminate() */

void __thiscall Sexy::InteractiveSoundManager::Terminate(InteractiveSoundManager *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  bool bVar1;
  undefined8 *puVar2;
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  a_Stack_18 [8];
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x48);
  local_8 = ___stack_chk_guard;
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            (a_Stack_18,(__normal_iterator *)&local_10);
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)a_Stack_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)a_Stack_18);
    ResourceGroup::Unload((ResourceGroup *)*puVar2);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)a_Stack_18);
  }
  this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x60);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_01);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            (a_Stack_18,(__normal_iterator *)&local_10);
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_01);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)a_Stack_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)a_Stack_18);
    ResourceGroup::UnloadFileIndex((ResourceGroup *)*puVar2);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)a_Stack_18);
  }
  std::vector<Sexy::ResourceGroup*,std::allocator<Sexy::ResourceGroup*>>::clear
            ((vector<Sexy::ResourceGroup*,std::allocator<Sexy::ResourceGroup*>> *)this_00);
  std::vector<Sexy::ResourceGroup*,std::allocator<Sexy::ResourceGroup*>>::clear
            ((vector<Sexy::ResourceGroup*,std::allocator<Sexy::ResourceGroup*>> *)this_01);
  this[0x79] = (InteractiveSoundManager)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::InteractiveSoundManager::InteractiveSoundManager(Sexy::IInteractiveAudioDriver*) */

void __thiscall
Sexy::InteractiveSoundManager::InteractiveSoundManager
          (InteractiveSoundManager *this,IInteractiveAudioDriver *param_1)

{
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)this);
  *(IInteractiveAudioDriver **)(this + 0x30) = param_1;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  this[0x79] = (InteractiveSoundManager)0x0;
  *(IInteractiveAudioDriver **)(this + 0x30) = param_1;
  this[0x78] = (InteractiveSoundManager)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::InteractiveSoundManager::Initialize(Sexy::InteractiveSoundManagerConfig const&) */

void __thiscall
Sexy::InteractiveSoundManager::Initialize
          (InteractiveSoundManager *this,InteractiveSoundManagerConfig *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  string *psVar4;
  long lVar5;
  undefined8 uVar6;
  WwiseInteractiveAudioDriver *this_00;
  undefined8 local_40;
  ResourceGroup *local_38 [6];
  long local_8;
  
  uVar6 = 1;
  local_8 = ___stack_chk_guard;
  uVar3 = GetRtpcIdFromString((char *)this);
  *(undefined4 *)(this + 0x38) = uVar3;
  uVar3 = GetRtpcIdFromString((char *)this);
  *(undefined4 *)(this + 0x3c) = uVar3;
  uVar3 = GetRtpcIdFromString((char *)this);
  *(undefined4 *)(this + 0x40) = uVar3;
  local_40 = FUN_052efc98(*(undefined8 *)param_1);
  while( true ) {
    local_38[0] = (ResourceGroup *)FUN_052efce8(*(undefined8 *)(param_1 + 8));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)local_38);
    if (!bVar1) break;
    psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    local_38[0] = (ResourceGroup *)
                  ResourceManager::GetResourceGroupNamed
                            (*(ResourceManager **)(gSexyApp + 0x848),psVar4);
    if ((local_38[0] == (ResourceGroup *)0x0) ||
       (cVar2 = ResourceGroup::Load(local_38[0]), cVar2 == '\0')) {
      uVar6 = 0;
    }
    else {
      std::vector<Sexy::ResourceGroup*,std::allocator<Sexy::ResourceGroup*>>::push_back
                ((vector<Sexy::ResourceGroup*,std::allocator<Sexy::ResourceGroup*>> *)(this + 0x48),
                 local_38);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  local_40 = FUN_052efc98(*(undefined8 *)(param_1 + 0x18));
  while( true ) {
    local_38[0] = (ResourceGroup *)FUN_052efce8(*(undefined8 *)(param_1 + 0x20));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)local_38);
    if (!bVar1) break;
    psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    local_38[0] = (ResourceGroup *)
                  ResourceManager::GetResourceGroupNamed
                            (*(ResourceManager **)(gSexyApp + 0x848),psVar4);
    if ((local_38[0] == (ResourceGroup *)0x0) ||
       (cVar2 = ResourceGroup::LoadFileIndex(local_38[0]), cVar2 == '\0')) {
      uVar6 = 0;
    }
    else {
      std::vector<Sexy::ResourceGroup*,std::allocator<Sexy::ResourceGroup*>>::push_back
                ((vector<Sexy::ResourceGroup*,std::allocator<Sexy::ResourceGroup*>> *)(this + 0x60),
                 local_38);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  ResStreamsManager::GetRSBPath();
  lVar5 = FUN_05474184((string *)local_38);
  std::string::~string((string *)local_38);
  if (lVar5 != 0) {
    ResStreamsManager::GetRSBPath();
    this_00 = *(WwiseInteractiveAudioDriver **)(this + 0x30);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           *)local_38,(map *)(param_1 + 0x30));
    WwiseInteractiveAudioDriver::HACK_SetPvZStreamingFilePathMap(this_00,(string *)local_38);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)local_38);
    WwiseInteractiveAudioDriver::HACK_SetAndroidAssetInfo(this_00,(string *)&local_40);
    std::string::~string((string *)&local_40);
  }
  this[0x79] = (InteractiveSoundManager)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

