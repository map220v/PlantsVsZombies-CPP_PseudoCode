// Class: Sexy::AsyncDeletePartialFilesTask


/* Sexy::AsyncDeletePartialFilesTask::RunImpl() */

void Sexy::AsyncDeletePartialFilesTask::RunImpl(void)

{
  ResumableRequestInfo::DeletePartialFiles();
  return;
}


/* Sexy::AsyncDeletePartialFilesTask::~AsyncDeletePartialFilesTask() */

void __thiscall
Sexy::AsyncDeletePartialFilesTask::~AsyncDeletePartialFilesTask(AsyncDeletePartialFilesTask *this)

{
  *(undefined ***)this = &PTR__AsyncDeletePartialFilesTask_06a30840;
  AsyncThreadedTask::~AsyncThreadedTask((AsyncThreadedTask *)this);
  return;
}


/* Sexy::AsyncDeletePartialFilesTask::~AsyncDeletePartialFilesTask() */

void __thiscall
Sexy::AsyncDeletePartialFilesTask::~AsyncDeletePartialFilesTask(AsyncDeletePartialFilesTask *this)

{
  ~AsyncDeletePartialFilesTask(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::AsyncDeletePartialFilesTask::AsyncDeletePartialFilesTask(Sexy::ResumableRequestInfo*) */

void __thiscall
Sexy::AsyncDeletePartialFilesTask::AsyncDeletePartialFilesTask
          (AsyncDeletePartialFilesTask *this,ResumableRequestInfo *param_1)

{
  AsyncThreadedTask::AsyncThreadedTask((AsyncThreadedTask *)this);
  *(ResumableRequestInfo **)(this + 0x48) = param_1;
  *(undefined ***)this = &PTR__AsyncDeletePartialFilesTask_06a30840;
  thunk_FUN_05475e00(this + 8,&DAT_06bbda98);
  return;
}

