// Class: TimelineActionRunner


/* TimelineActionRunner::onEnd() */

void __thiscall TimelineActionRunner::onEnd(TimelineActionRunner *this)

{
  (**(code **)(*(long *)this + 0x30))();
  return;
}


/* TimelineActionRunner::Size() const */

void __thiscall TimelineActionRunner::Size(TimelineActionRunner *this)

{
  FUN_03668464(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
  return;
}


/* TimelineActionRunner::onBegin() */

void __thiscall TimelineActionRunner::onBegin(TimelineActionRunner *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x28) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimelineActionRunner::EndAllActions() */

void __thiscall TimelineActionRunner::EndAllActions(TimelineActionRunner *this)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  RunnableAction *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x10));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x10));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_00 = (RunnableAction *)*puVar3;
    cVar2 = FUN_03668458(*(undefined4 *)(this_00 + 8));
    if (cVar2 == '\0') {
      RunnableAction::End(this_00);
    }
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimelineActionRunner::allActionsAreFinished() */

void __thiscall TimelineActionRunner::allActionsAreFinished(TimelineActionRunner *this)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  long *plVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x10));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x10));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = FUN_03668458(*(undefined4 *)(*plVar4 + 8));
    uVar3 = 0;
    if (cVar1 == '\0') goto LAB_0366865c;
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
  }
  uVar3 = 1;
LAB_0366865c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimelineActionRunner::onUpdate() */

void __thiscall TimelineActionRunner::onUpdate(TimelineActionRunner *this)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  RunnableAction *this_00;
  float fVar6;
  float fVar7;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar6 = (float)PVZ_T();
  fVar7 = *(float *)(this + 0x28);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x10));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x10));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_00 = (RunnableAction *)*puVar4;
    uVar5 = *(undefined4 *)(this_00 + 8);
    bVar2 = FUN_03668440(uVar5);
    if (bVar2 < (*(float *)(puVar4 + 1) <= fVar6 - fVar7)) {
      RunnableAction::Begin(this_00);
      uVar5 = *(undefined4 *)(this_00 + 8);
    }
    cVar3 = FUN_0366844c(uVar5);
    if (cVar3 != '\0') {
      DataPersistorFactory::GetOfflinePersistor((DataPersistorFactory *)this_00);
    }
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
  }
  cVar3 = FUN_0366844c(*(undefined4 *)(this + 8));
  if ((cVar3 != '\0') && (cVar3 = allActionsAreFinished(this), cVar3 != '\0')) {
    RunnableAction::End((RunnableAction *)this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TimelineActionRunner::TimelineActionRunner() */

void __thiscall TimelineActionRunner::TimelineActionRunner(TimelineActionRunner *this)

{
  undefined4 uVar1;
  
  ActionRunner::ActionRunner((ActionRunner *)this);
  *(undefined ***)this = &PTR__TimelineActionRunner_06675d80;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x28) = uVar1;
  return;
}


/* TimelineActionRunner::IsEmpty() const */

void __thiscall TimelineActionRunner::IsEmpty(TimelineActionRunner *this)

{
  std::vector<TimelineActionRunnerEvent,std::allocator<TimelineActionRunnerEvent>>::empty
            ((vector<TimelineActionRunnerEvent,std::allocator<TimelineActionRunnerEvent>> *)
             (this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimelineActionRunner::~TimelineActionRunner() */

void __thiscall TimelineActionRunner::~TimelineActionRunner(TimelineActionRunner *this)

{
  bool bVar1;
  long *plVar2;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x10);
  *(undefined ***)this = &PTR__TimelineActionRunner_06675d80;
  EndAllActions(this);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if ((long *)*plVar2 != (long *)0x0) {
      (**(code **)(*(long *)*plVar2 + 8))();
    }
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
  }
  std::vector<TimelineActionRunnerEvent,std::allocator<TimelineActionRunnerEvent>>::~vector
            ((vector<TimelineActionRunnerEvent,std::allocator<TimelineActionRunnerEvent>> *)this_00)
  ;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TimelineActionRunner::~TimelineActionRunner() */

void __thiscall TimelineActionRunner::~TimelineActionRunner(TimelineActionRunner *this)

{
  ~TimelineActionRunner(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimelineActionRunner::Add(RunnableAction*, float) */

void __thiscall
TimelineActionRunner::Add(TimelineActionRunner *this,RunnableAction *param_1,float param_2)

{
  TimelineActionRunnerEvent aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TimelineActionRunnerEvent::TimelineActionRunnerEvent(aTStack_18,param_1,param_2);
  std::vector<TimelineActionRunnerEvent,std::allocator<TimelineActionRunnerEvent>>::push_back
            ((vector<TimelineActionRunnerEvent,std::allocator<TimelineActionRunnerEvent>> *)
             (this + 0x10),aTStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* TimelineActionRunner::Add(RunnableAction*) */

void __thiscall TimelineActionRunner::Add(TimelineActionRunner *this,RunnableAction *param_1)

{
  Add(this,param_1,0.0);
  return;
}

