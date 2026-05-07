// Class: SequentialActionRunner


/* SequentialActionRunner::Size() const */

void __thiscall SequentialActionRunner::Size(SequentialActionRunner *this)

{
  FUN_036679e8(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SequentialActionRunner::processActions() */

void __thiscall SequentialActionRunner::processActions(SequentialActionRunner *this)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
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
    uVar4 = *(undefined4 *)(this_00 + 8);
    cVar2 = FUN_036679c4(uVar4);
    if (cVar2 == '\0') {
      RunnableAction::Begin(this_00);
      uVar4 = *(undefined4 *)(this_00 + 8);
      cVar2 = FUN_036679d0(uVar4);
      if (cVar2 == '\0') goto LAB_03667bb0;
LAB_03667c18:
      DataPersistorFactory::GetOfflinePersistor((DataPersistorFactory *)this_00);
      cVar2 = FUN_036679dc(*(undefined4 *)(this_00 + 8));
    }
    else {
      cVar2 = FUN_036679d0(uVar4);
      if (cVar2 != '\0') goto LAB_03667c18;
LAB_03667bb0:
      cVar2 = FUN_036679dc(uVar4);
    }
    if (cVar2 == '\0') break;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SequentialActionRunner::EndAllActions() */

void __thiscall SequentialActionRunner::EndAllActions(SequentialActionRunner *this)

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
    cVar2 = FUN_036679dc(*(undefined4 *)(this_00 + 8));
    if (cVar2 == '\0') {
      RunnableAction::End(this_00);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SequentialActionRunner::SequentialActionRunner() */

void __thiscall SequentialActionRunner::SequentialActionRunner(SequentialActionRunner *this)

{
  ActionRunner::ActionRunner((ActionRunner *)this);
  *(undefined ***)this = &PTR__SequentialActionRunner_06675cc0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* SequentialActionRunner::IsEmpty() const */

void __thiscall SequentialActionRunner::IsEmpty(SequentialActionRunner *this)

{
  std::vector<RunnableAction*,std::allocator<RunnableAction*>>::empty
            ((vector<RunnableAction*,std::allocator<RunnableAction*>> *)(this + 0x10));
  return;
}


/* SequentialActionRunner::onUpdate() */

void __thiscall SequentialActionRunner::onUpdate(SequentialActionRunner *this)

{
  char cVar1;
  long *plVar2;
  
  processActions(this);
  cVar1 = FUN_036679d0(*(undefined4 *)(this + 8));
  if (cVar1 == '\0') {
    return;
  }
  cVar1 = std::vector<RunnableAction*,std::allocator<RunnableAction*>>::empty
                    ((vector<RunnableAction*,std::allocator<RunnableAction*>> *)(this + 0x10));
  if (cVar1 == '\0') {
    plVar2 = (long *)std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)(this + 0x10));
    cVar1 = FUN_036679dc(*(undefined4 *)(*plVar2 + 8));
    if (cVar1 == '\0') {
      return;
    }
  }
  RunnableAction::End((RunnableAction *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SequentialActionRunner::~SequentialActionRunner() */

void __thiscall SequentialActionRunner::~SequentialActionRunner(SequentialActionRunner *this)

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
  *(undefined ***)this = &PTR__SequentialActionRunner_06675cc0;
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
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<RunnableAction*,std::allocator<RunnableAction*>>::clear
            ((vector<RunnableAction*,std::allocator<RunnableAction*>> *)this_00);
  std::vector<RunnableAction*,std::allocator<RunnableAction*>>::~vector
            ((vector<RunnableAction*,std::allocator<RunnableAction*>> *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SequentialActionRunner::~SequentialActionRunner() */

void __thiscall SequentialActionRunner::~SequentialActionRunner(SequentialActionRunner *this)

{
  ~SequentialActionRunner(this);
  AK::FreeHook(this);
  return;
}


/* SequentialActionRunner::Add(RunnableAction*) */

RunnableAction * __thiscall
SequentialActionRunner::Add(SequentialActionRunner *this,RunnableAction *param_1)

{
  RunnableAction *local_8;
  
  local_8 = param_1;
  std::vector<RunnableAction*,std::allocator<RunnableAction*>>::push_back
            ((vector<RunnableAction*,std::allocator<RunnableAction*>> *)(this + 0x10),&local_8);
  return local_8;
}

