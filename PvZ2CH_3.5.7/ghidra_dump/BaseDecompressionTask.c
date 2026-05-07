// Class: BaseDecompressionTask


/* BaseDecompressionTask::GetInBuffer() */

undefined8 __thiscall BaseDecompressionTask::GetInBuffer(BaseDecompressionTask *this)

{
  return *(undefined8 *)(this + 0x38);
}


/* BaseDecompressionTask::Finish() */

undefined8 __thiscall BaseDecompressionTask::Finish(BaseDecompressionTask *this)

{
  (**(code **)(**(long **)(this + 0x30) + 0x28))(*(long **)(this + 0x30));
  (**(code **)(**(long **)(this + 0x40) + 0x28))(*(long **)(this + 0x40));
  (**(code **)(**(long **)(this + 0x38) + 0x28))(*(long **)(this + 0x38));
  return 1;
}


/* BaseDecompressionTask::GetOutBuffer() */

undefined8 __thiscall BaseDecompressionTask::GetOutBuffer(BaseDecompressionTask *this)

{
  return *(undefined8 *)(this + 0x40);
}


/* BaseDecompressionTask::operator new(unsigned long) */

void * __thiscall BaseDecompressionTask::operator_new(BaseDecompressionTask *this,ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)Sexy::SimpleMemPool::GetMemory(0x6c452e0);
  return pvVar1;
}


/* BaseDecompressionTask::operator delete(void*) */

void __thiscall BaseDecompressionTask::operator_delete(BaseDecompressionTask *this,void *param_1)

{
  Sexy::SimpleMemPool::ReturnMemory((SimpleMemPool *)msPool,(uchar *)this);
  return;
}


/* BaseDecompressionTask::~BaseDecompressionTask() */

void __thiscall BaseDecompressionTask::~BaseDecompressionTask(BaseDecompressionTask *this)

{
  Sexy::SimpleMemPool::ReturnMemory((SimpleMemPool *)msPool,(uchar *)this);
  return;
}


/* BaseDecompressionTask::Execute() */

undefined8 __thiscall BaseDecompressionTask::Execute(BaseDecompressionTask *this)

{
  uint uVar1;
  uint uVar2;
  uchar *puVar3;
  uchar *puVar4;
  BaseBufferResource *pBVar5;
  BaseResStreamsDriver *pBVar6;
  
  (**(code **)(**(long **)(this + 0x40) + 0x20))(*(long **)(this + 0x40));
  *(undefined4 *)(this + 0x28) = 0;
  if (this[0x50] != (BaseDecompressionTask)0x0) {
    (**(code **)(**(long **)(this + 0x30) + 0x20))(*(long **)(this + 0x30));
    if (this[0x51] != (BaseDecompressionTask)0x0) {
      Sexy::BaseResStreamsDriver::BeginDecompression(*(BaseResStreamsDriver **)(this + 0x18),1);
    }
    pBVar6 = *(BaseResStreamsDriver **)(this + 0x18);
    puVar3 = (uchar *)FUN_053e43c0(*(undefined8 *)(*(long *)(this + 0x38) + 0x18));
    pBVar5 = *(BaseBufferResource **)(this + 0x40);
    uVar2 = *(uint *)(this + 0x2c);
    puVar4 = (uchar *)FUN_053e43c0(*(undefined8 *)(pBVar5 + 0x18));
    if (*(code **)(*(long *)pBVar5 + 0x38) == Sexy::BaseBufferResource::GetSize) {
      uVar1 = Sexy::BaseBufferResource::GetSize(pBVar5);
    }
    else {
      uVar1 = (**(code **)(*(long *)pBVar5 + 0x38))();
    }
    Sexy::BaseResStreamsDriver::DecompressStream(pBVar6,puVar3,uVar2,puVar4,uVar1);
    return 1;
  }
  pBVar5 = *(BaseBufferResource **)(this + 0x40);
  pBVar6 = *(BaseResStreamsDriver **)(this + 0x18);
  puVar3 = (uchar *)FUN_053e43c0(*(undefined8 *)(pBVar5 + 0x18));
  if (*(code **)(*(long *)pBVar5 + 0x38) == Sexy::BaseBufferResource::GetSize) {
    uVar2 = Sexy::BaseBufferResource::GetSize(pBVar5);
  }
  else {
    uVar2 = (**(code **)(*(long *)pBVar5 + 0x38))();
  }
  Sexy::BaseResStreamsDriver::ContinueDecompressStream(pBVar6,puVar3,uVar2);
  return 1;
}


/* BaseDecompressionTask::Update() */

void __thiscall BaseDecompressionTask::Update(BaseDecompressionTask *this)

{
  int iVar1;
  
  if ((*(int *)(this + 0x28) == 0) &&
     (iVar1 = Sexy::BaseResStreamsDriver::IsDecompressionChunkComplete
                        (*(BaseResStreamsDriver **)(this + 0x18)), iVar1 != 0)) {
    *(undefined4 *)(this + 0x28) = 1;
    return;
  }
  return;
}


/* BaseDecompressionTask::DidFinishDecompression() */

bool __thiscall BaseDecompressionTask::DidFinishDecompression(BaseDecompressionTask *this)

{
  int iVar1;
  
  iVar1 = Sexy::BaseResStreamsDriver::IsDecompressionFullyComplete
                    (*(BaseResStreamsDriver **)(this + 0x18));
  return iVar1 != 0;
}


/* BaseDecompressionTask::GetNumBytesRead() */

void __thiscall BaseDecompressionTask::GetNumBytesRead(BaseDecompressionTask *this)

{
  Sexy::BaseResStreamsDriver::GetDecompressedSize(*(BaseResStreamsDriver **)(this + 0x18));
  return;
}


/* BaseDecompressionTask::BaseDecompressionTask(Sexy::BaseResStreamsDriver*, BaseDecompressionTask*,
   Sexy::BaseBufferResource*, unsigned int, bool) */

void __thiscall
BaseDecompressionTask::BaseDecompressionTask
          (BaseDecompressionTask *this,BaseResStreamsDriver *param_1,BaseDecompressionTask *param_2,
          BaseBufferResource *param_3,uint param_4,bool param_5)

{
  long *plVar1;
  long lVar2;
  
  BaseTask::BaseTask((BaseTask *)this,param_1,1);
  lVar2 = *(long *)param_3;
  *(BaseBufferResource **)(this + 0x38) = param_3;
  *(undefined ***)this = &PTR_nop_06a376d0;
  *(undefined8 *)(this + 0x40) = 0;
  *(uint *)(this + 0x2c) = param_4;
  (**(code **)(lVar2 + 0x20))(param_3);
  plVar1 = (long *)Sexy::BaseResStreamsDriver::GetDecompressThreadResource(param_1);
  this[0x51] = (BaseDecompressionTask)param_5;
  *(long **)(this + 0x30) = plVar1;
  if (param_2 != (BaseDecompressionTask *)0x0) {
    lVar2 = *plVar1;
    this[0x50] = (BaseDecompressionTask)0x0;
    (**(code **)(lVar2 + 0x20))();
    return;
  }
  this[0x50] = (BaseDecompressionTask)0x1;
  return;
}


/* BaseDecompressionTask::CanExecute() */

bool __thiscall BaseDecompressionTask::CanExecute(BaseDecompressionTask *this)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  
  if (this[0x50] != (BaseDecompressionTask)0x0) {
    pcVar3 = *(code **)(*(long *)*(BaseTaskResource **)(this + 0x30) + 0x18);
    if (pcVar3 == Sexy::BaseTaskResource::IsLocked) {
      cVar1 = Sexy::BaseTaskResource::IsLocked(*(BaseTaskResource **)(this + 0x30));
    }
    else {
      cVar1 = (*pcVar3)();
    }
    if (cVar1 != '\0') {
      return false;
    }
  }
  lVar2 = Sexy::BaseResStreamsDriver::GetFreeDecompressBuffer
                    (*(BaseResStreamsDriver **)(this + 0x18));
  *(long *)(this + 0x40) = lVar2;
  return lVar2 != 0;
}

