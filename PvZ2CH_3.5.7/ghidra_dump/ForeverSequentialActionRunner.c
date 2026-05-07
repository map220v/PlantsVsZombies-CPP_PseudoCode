// Class: ForeverSequentialActionRunner


/* ForeverSequentialActionRunner::ForeverSequentialActionRunner() */

void __thiscall
ForeverSequentialActionRunner::ForeverSequentialActionRunner(ForeverSequentialActionRunner *this)

{
  SequentialActionRunner::SequentialActionRunner((SequentialActionRunner *)this);
  *(undefined ***)this = &PTR__ForeverSequentialActionRunner_06675d20;
  return;
}


/* ForeverSequentialActionRunner::~ForeverSequentialActionRunner() */

void __thiscall
ForeverSequentialActionRunner::~ForeverSequentialActionRunner(ForeverSequentialActionRunner *this)

{
  *(undefined ***)this = &PTR__ForeverSequentialActionRunner_06675d20;
  SequentialActionRunner::~SequentialActionRunner((SequentialActionRunner *)this);
  return;
}


/* ForeverSequentialActionRunner::~ForeverSequentialActionRunner() */

void __thiscall
ForeverSequentialActionRunner::~ForeverSequentialActionRunner(ForeverSequentialActionRunner *this)

{
  ~ForeverSequentialActionRunner(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ForeverSequentialActionRunner::deleteCompletedActions() */

void __thiscall
ForeverSequentialActionRunner::deleteCompletedActions(ForeverSequentialActionRunner *this)

{
  vector<RunnableAction*,std::allocator<RunnableAction*>> *this_00;
  char cVar1;
  long *plVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<RunnableAction*,std::allocator<RunnableAction*>> *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  while (cVar1 = std::vector<RunnableAction*,std::allocator<RunnableAction*>>::empty(this_00),
        cVar1 == '\0') {
    plVar2 = (long *)std::
                     vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::
                     front((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>
                            *)this_00);
    cVar1 = FUN_036679dc(*(undefined4 *)(*plVar2 + 8));
    if (cVar1 == '\0') break;
    plVar2 = (long *)std::
                     vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::
                     front((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>
                            *)this_00);
    if ((long *)*plVar2 != (long *)0x0) {
      (**(code **)(*(long *)*plVar2 + 8))();
    }
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this_00);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    std::vector<RunnableAction*,std::allocator<RunnableAction*>>::erase(this_00,local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ForeverSequentialActionRunner::onUpdate() */

void __thiscall ForeverSequentialActionRunner::onUpdate(ForeverSequentialActionRunner *this)

{
  SequentialActionRunner::processActions((SequentialActionRunner *)this);
  deleteCompletedActions(this);
  return;
}

