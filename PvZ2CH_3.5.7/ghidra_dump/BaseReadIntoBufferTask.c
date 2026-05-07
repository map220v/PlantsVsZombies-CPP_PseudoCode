// Class: BaseReadIntoBufferTask


/* BaseReadIntoBufferTask::Finish() */

undefined8 __thiscall BaseReadIntoBufferTask::Finish(BaseReadIntoBufferTask *this)

{
  (**(code **)(**(long **)(this + 0x38) + 0x28))(*(long **)(this + 0x38));
  (**(code **)(**(long **)(this + 0x30) + 0x28))(*(long **)(this + 0x30));
  return 1;
}


/* BaseReadIntoBufferTask::Execute() */

undefined8 __thiscall BaseReadIntoBufferTask::Execute(BaseReadIntoBufferTask *this)

{
  undefined8 uVar1;
  long *plVar2;
  
  (**(code **)(**(long **)(this + 0x38) + 0x20))(*(long **)(this + 0x38));
  (**(code **)(**(long **)(this + 0x30) + 0x20))(*(long **)(this + 0x30));
  plVar2 = *(long **)(this + 0x40);
  *(undefined4 *)(this + 0x28) = 0;
  uVar1 = FUN_053e43c0(*(undefined8 *)(*(long *)(this + 0x38) + 0x18));
  (**(code **)(*plVar2 + 0x50))(plVar2,uVar1,*(undefined4 *)(this + 0x2c));
  return 1;
}


/* BaseReadIntoBufferTask::operator new(unsigned long) */

void * __thiscall BaseReadIntoBufferTask::operator_new(BaseReadIntoBufferTask *this,ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)Sexy::SimpleMemPool::GetMemory(0x6c45310);
  return pvVar1;
}


/* BaseReadIntoBufferTask::operator delete(void*) */

void __thiscall BaseReadIntoBufferTask::operator_delete(BaseReadIntoBufferTask *this,void *param_1)

{
  Sexy::SimpleMemPool::ReturnMemory((SimpleMemPool *)msPool,(uchar *)this);
  return;
}


/* BaseReadIntoBufferTask::~BaseReadIntoBufferTask() */

void __thiscall BaseReadIntoBufferTask::~BaseReadIntoBufferTask(BaseReadIntoBufferTask *this)

{
  Sexy::SimpleMemPool::ReturnMemory((SimpleMemPool *)msPool,(uchar *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BaseReadIntoBufferTask::BaseReadIntoBufferTask(Sexy::BaseResStreamsDriver*, Sexy::IFile*,
   unsigned int) */

void __thiscall
BaseReadIntoBufferTask::BaseReadIntoBufferTask
          (BaseReadIntoBufferTask *this,BaseResStreamsDriver *param_1,IFile *param_2,uint param_3)

{
  long lVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint local_14 [2];
  uint local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_14[0] = param_3;
  BaseTask::BaseTask((BaseTask *)this,param_1,0);
  lVar1 = *(long *)param_1;
  *(undefined ***)this = &PTR_nop_06a375b0;
  if (*(code **)(lVar1 + 0x98) == Sexy::BaseResStreamsDriver::GetReadBufferSize) {
    local_c = Sexy::BaseResStreamsDriver::GetReadBufferSize();
  }
  else {
    local_c = (**(code **)(lVar1 + 0x98))(param_1);
  }
  puVar2 = eastl::min_alt<unsigned_int>(local_14,&local_c);
  *(uint *)(this + 0x2c) = *puVar2;
  uVar3 = Sexy::BaseResStreamsDriver::GetDiskResource(param_1);
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = uVar3;
  *(IFile **)(this + 0x40) = param_2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BaseReadIntoBufferTask::CanExecute() */

bool __thiscall BaseReadIntoBufferTask::CanExecute(BaseReadIntoBufferTask *this)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  code *pcVar4;
  
  pcVar4 = *(code **)(*(long *)*(BaseTaskResource **)(this + 0x30) + 0x18);
  if (pcVar4 == Sexy::BaseTaskResource::IsLocked) {
    cVar2 = Sexy::BaseTaskResource::IsLocked(*(BaseTaskResource **)(this + 0x30));
  }
  else {
    cVar2 = (*pcVar4)();
  }
  bVar1 = false;
  if (cVar2 == '\0') {
    lVar3 = Sexy::BaseResStreamsDriver::GetFreeReadBuffer(*(BaseResStreamsDriver **)(this + 0x18));
    bVar1 = lVar3 != 0;
    *(long *)(this + 0x38) = lVar3;
  }
  return bVar1;
}

