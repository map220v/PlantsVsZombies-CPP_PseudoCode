// Class: Sexy::AsyncThreadedTask


/* Sexy::AsyncThreadedTask::AsyncThreadedTask() */

void __thiscall Sexy::AsyncThreadedTask::AsyncThreadedTask(AsyncThreadedTask *this)

{
  IAsyncNetworkTask::IAsyncNetworkTask((IAsyncNetworkTask *)this);
  *(undefined **)this = &DAT_06a30490;
  return;
}


/* Sexy::AsyncThreadedTask::~AsyncThreadedTask() */

void __thiscall Sexy::AsyncThreadedTask::~AsyncThreadedTask(AsyncThreadedTask *this)

{
  *(undefined **)this = &DAT_06a30490;
  IAsyncNetworkTask::~IAsyncNetworkTask((IAsyncNetworkTask *)this);
  return;
}


/* Sexy::AsyncThreadedTask::~AsyncThreadedTask() */

void __thiscall Sexy::AsyncThreadedTask::~AsyncThreadedTask(AsyncThreadedTask *this)

{
  ~AsyncThreadedTask(this);
  AK::FreeHook(this);
  return;
}

