// Class: GeneralTaskManager


/* GeneralTaskManager::Initialize() */

void __thiscall GeneralTaskManager::Initialize(GeneralTaskManager *this)

{
  (**(code **)(*(long *)this + 0x18))();
  (**(code **)(*(long *)this + 0x20))(this);
  (**(code **)(*(long *)this + 0x10))(this);
  return;
}


/* GeneralTaskManager::GeneralTaskManager() */

void __thiscall GeneralTaskManager::GeneralTaskManager(GeneralTaskManager *this)

{
  *(undefined **)this = &DAT_067119f0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<GeneralTask*,std::allocator<GeneralTask*>>::clear
            ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)(this + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskManager::ClearAllTasks() */

void __thiscall GeneralTaskManager::ClearAllTasks(GeneralTaskManager *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 8);
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
      puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      plVar3 = (long *)*puVar2;
      if (plVar3 == (long *)0x0) break;
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      local_18 = std::vector<GeneralTask*,std::allocator<GeneralTask*>>::erase
                           ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)this_00,local_10);
      (**(code **)(*plVar3 + 0x18))(plVar3);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* GeneralTaskManager::~GeneralTaskManager() */

void __thiscall GeneralTaskManager::~GeneralTaskManager(GeneralTaskManager *this)

{
  *(undefined **)this = &DAT_067119f0;
  ClearAllTasks(this);
  std::vector<GeneralTask*,std::allocator<GeneralTask*>>::~vector
            ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)(this + 8));
  return;
}


/* GeneralTaskManager::~GeneralTaskManager() */

void __thiscall GeneralTaskManager::~GeneralTaskManager(GeneralTaskManager *this)

{
  ~GeneralTaskManager(this);
  AK::FreeHook(this);
  return;
}

