// Class: BaseReadWithoutBufferTask


/* BaseReadWithoutBufferTask::GetNumBytesRead() */

undefined4 __thiscall BaseReadWithoutBufferTask::GetNumBytesRead(BaseReadWithoutBufferTask *this)

{
  return *(undefined4 *)(this + 0x2c);
}


/* BaseReadWithoutBufferTask::Update() */

void __thiscall BaseReadWithoutBufferTask::Update(BaseReadWithoutBufferTask *this)

{
  int iVar1;
  
  if (*(int *)(this + 0x28) == 0) {
    iVar1 = (**(code **)(**(long **)(this + 0x40) + 0x58))(*(long **)(this + 0x40));
    if (iVar1 == 0) {
      *(undefined4 *)(this + 0x28) = 1;
      return;
    }
    if (iVar1 == 2) {
      *(undefined4 *)(this + 0x28) = 0xffffffff;
      return;
    }
  }
  return;
}


/* BaseReadWithoutBufferTask::CanExecute() */

byte __thiscall BaseReadWithoutBufferTask::CanExecute(BaseReadWithoutBufferTask *this)

{
  byte bVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(*(long *)*(BaseTaskResource **)(this + 0x30) + 0x18);
  if (pcVar2 == Sexy::BaseTaskResource::IsLocked) {
    bVar1 = Sexy::BaseTaskResource::IsLocked(*(BaseTaskResource **)(this + 0x30));
    return bVar1 ^ 1;
  }
  bVar1 = (*pcVar2)();
  return bVar1 ^ 1;
}


/* BaseReadWithoutBufferTask::Execute() */

undefined8 __thiscall BaseReadWithoutBufferTask::Execute(BaseReadWithoutBufferTask *this)

{
  (**(code **)(**(long **)(this + 0x30) + 0x20))(*(long **)(this + 0x30));
  *(undefined4 *)(this + 0x28) = 0;
  (**(code **)(**(long **)(this + 0x40) + 0x48))
            (*(long **)(this + 0x40),*(undefined4 *)(this + 0x48));
  (**(code **)(**(long **)(this + 0x40) + 0x50))
            (*(long **)(this + 0x40),*(undefined8 *)(this + 0x38),*(undefined4 *)(this + 0x2c));
  return 1;
}


/* BaseReadWithoutBufferTask::Finish() */

undefined8 __thiscall BaseReadWithoutBufferTask::Finish(BaseReadWithoutBufferTask *this)

{
  (**(code **)(**(long **)(this + 0x30) + 0x28))(*(long **)(this + 0x30));
  return 1;
}


/* BaseReadWithoutBufferTask::operator new(unsigned long) */

void * __thiscall
BaseReadWithoutBufferTask::operator_new(BaseReadWithoutBufferTask *this,ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)Sexy::SimpleMemPool::GetMemory(0x6c452c0);
  return pvVar1;
}


/* BaseReadWithoutBufferTask::operator delete(void*) */

void __thiscall
BaseReadWithoutBufferTask::operator_delete(BaseReadWithoutBufferTask *this,void *param_1)

{
  Sexy::SimpleMemPool::ReturnMemory((SimpleMemPool *)msPool,(uchar *)this);
  return;
}


/* BaseReadWithoutBufferTask::~BaseReadWithoutBufferTask() */

void __thiscall
BaseReadWithoutBufferTask::~BaseReadWithoutBufferTask(BaseReadWithoutBufferTask *this)

{
  Sexy::SimpleMemPool::ReturnMemory((SimpleMemPool *)msPool,(uchar *)this);
  return;
}


/* BaseReadWithoutBufferTask::BaseReadWithoutBufferTask(Sexy::BaseResStreamsDriver*, Sexy::IFile*,
   unsigned char*, unsigned int, unsigned int) */

void __thiscall
BaseReadWithoutBufferTask::BaseReadWithoutBufferTask
          (BaseReadWithoutBufferTask *this,BaseResStreamsDriver *param_1,IFile *param_2,
          uchar *param_3,uint param_4,uint param_5)

{
  undefined8 uVar1;
  
  BaseTask::BaseTask((BaseTask *)this,param_1,0);
  *(uchar **)(this + 0x38) = param_3;
  *(uint *)(this + 0x2c) = param_4;
  *(undefined ***)this = &PTR_nop_06a37640;
  uVar1 = Sexy::BaseResStreamsDriver::GetDiskResource(param_1);
  *(IFile **)(this + 0x40) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(uint *)(this + 0x48) = param_5;
  return;
}

