// Class: Sexy::AsyncMainThreadTask


/* Sexy::AsyncMainThreadTask::AsyncMainThreadTask() */

void __thiscall Sexy::AsyncMainThreadTask::AsyncMainThreadTask(AsyncMainThreadTask *this)

{
  IAsyncNetworkTask::IAsyncNetworkTask((IAsyncNetworkTask *)this);
  *(undefined **)this = &DAT_06a30420;
  return;
}


/* Sexy::AsyncMainThreadTask::~AsyncMainThreadTask() */

void __thiscall Sexy::AsyncMainThreadTask::~AsyncMainThreadTask(AsyncMainThreadTask *this)

{
  *(undefined **)this = &DAT_06a30420;
  IAsyncNetworkTask::~IAsyncNetworkTask((IAsyncNetworkTask *)this);
  return;
}


/* Sexy::AsyncMainThreadTask::~AsyncMainThreadTask() */

void __thiscall Sexy::AsyncMainThreadTask::~AsyncMainThreadTask(AsyncMainThreadTask *this)

{
  ~AsyncMainThreadTask(this);
  AK::FreeHook(this);
  return;
}

