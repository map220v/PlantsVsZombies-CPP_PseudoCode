// Class: BaseTask


/* BaseTask::GetType() */

undefined4 __thiscall BaseTask::GetType(BaseTask *this)

{
  return *(undefined4 *)(this + 0x20);
}


/* BaseTask::IsDone() */

bool __thiscall BaseTask::IsDone(BaseTask *this)

{
  return *(int *)(this + 0x28) != 0;
}


/* BaseTask::IsExecuting() */

BaseTask __thiscall BaseTask::IsExecuting(BaseTask *this)

{
  return this[0x24];
}


/* BaseTask::HasError() */

uint __thiscall BaseTask::HasError(BaseTask *this)

{
  return *(uint *)(this + 0x28) >> 0x1f;
}


/* BaseTask::BaseTask(Sexy::BaseResStreamsDriver*, Sexy::IResStreamsDriver::TaskType) */

void __thiscall BaseTask::BaseTask(BaseTask *this,undefined8 param_1,undefined4 param_3)

{
  Sexy::IResStreamsDriver::Task::Task((Task *)this);
  *(undefined8 *)(this + 0x18) = param_1;
  *(undefined4 *)(this + 0x20) = param_3;
  this[0x24] = (BaseTask)0x0;
  *(undefined **)this = &DAT_06a37520;
  *(undefined4 *)(this + 0x28) = 0;
  return;
}

