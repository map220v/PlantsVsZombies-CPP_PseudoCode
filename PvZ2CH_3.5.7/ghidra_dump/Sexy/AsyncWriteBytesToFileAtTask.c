// Class: Sexy::AsyncWriteBytesToFileAtTask


/* Sexy::AsyncWriteBytesToFileAtTask::~AsyncWriteBytesToFileAtTask() */

void __thiscall
Sexy::AsyncWriteBytesToFileAtTask::~AsyncWriteBytesToFileAtTask(AsyncWriteBytesToFileAtTask *this)

{
  *(undefined ***)this = &PTR__AsyncWriteBytesToFileAtTask_06a30680;
  NUM_ASYNC_WRITE_BYTES_TO_FILE_AT_TASK = NUM_ASYNC_WRITE_BYTES_TO_FILE_AT_TASK + -1;
  std::string::~string((string *)(this + 0x60));
  AsyncThreadedTask::~AsyncThreadedTask((AsyncThreadedTask *)this);
  return;
}


/* Sexy::AsyncWriteBytesToFileAtTask::~AsyncWriteBytesToFileAtTask() */

void __thiscall
Sexy::AsyncWriteBytesToFileAtTask::~AsyncWriteBytesToFileAtTask(AsyncWriteBytesToFileAtTask *this)

{
  ~AsyncWriteBytesToFileAtTask(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::AsyncWriteBytesToFileAtTask::AsyncWriteBytesToFileAtTask(Sexy::ResumableRequestInfo*,
   Sexy::NetworkServiceListener*, void const*, std::string const&, Sexy::Buffer*) */

void __thiscall
Sexy::AsyncWriteBytesToFileAtTask::AsyncWriteBytesToFileAtTask
          (AsyncWriteBytesToFileAtTask *this,ResumableRequestInfo *param_1,
          NetworkServiceListener *param_2,void *param_3,string *param_4,Buffer *param_5)

{
  AsyncThreadedTask::AsyncThreadedTask((AsyncThreadedTask *)this);
  *(void **)(this + 0x58) = param_3;
  *(NetworkServiceListener **)(this + 0x50) = param_2;
  *(undefined ***)this = &PTR__AsyncWriteBytesToFileAtTask_06a30680;
  *(ResumableRequestInfo **)(this + 0x48) = param_1;
  FUN_05475d88(this + 0x60,param_4);
  *(Buffer **)(this + 0x70) = param_5;
  ResumableRequestInfo::SetIsBufferWriting(*(ResumableRequestInfo **)(this + 0x48),param_5,true);
  thunk_FUN_05475e00(this + 8,&DAT_06bbda78);
  NUM_ASYNC_WRITE_BYTES_TO_FILE_AT_TASK = NUM_ASYNC_WRITE_BYTES_TO_FILE_AT_TASK + 1;
  return;
}


/* Sexy::AsyncWriteBytesToFileAtTask::RunImpl() */

void __thiscall Sexy::AsyncWriteBytesToFileAtTask::RunImpl(AsyncWriteBytesToFileAtTask *this)

{
  string *psVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  AsyncResumeRequestErrorTask *this_00;
  ResumableRequestInfo *this_01;
  
  psVar1 = gSexyAppBase;
  uVar4 = Buffer::GetDataPtr(*(Buffer **)(this + 0x70));
  iVar3 = Buffer::GetDataLen(*(Buffer **)(this + 0x70));
  ResumableRequestInfo::GetPos(*(ResumableRequestInfo **)(this + 0x48));
  cVar2 = SexyAppBase::WriteBytesToFileAt(psVar1,this + 0x60,uVar4,(long)iVar3);
  if (cVar2 != '\0') {
    this_01 = *(ResumableRequestInfo **)(this + 0x48);
    iVar3 = Buffer::GetDataLen(*(Buffer **)(this + 0x70));
    ResumableRequestInfo::IncrPos(this_01,iVar3);
    ResumableRequestInfo::SaveResumeRequestData(*(ResumableRequestInfo **)(this + 0x48));
    Buffer::Clear(*(Buffer **)(this + 0x70));
    ResumableRequestInfo::SetIsBufferWriting
              (*(ResumableRequestInfo **)(this + 0x48),*(Buffer **)(this + 0x70),false);
    return;
  }
  ResumableRequestInfo::DeletePartialFiles();
  this_00 = ::operator_new(0x70);
  AsyncResumeRequestErrorTask::AsyncResumeRequestErrorTask
            (this_00,*(ResumableRequestInfo **)(this + 0x48),
             *(NetworkServiceListener **)(this + 0x50),*(void **)(this + 0x58),0x57a);
  (**(code **)(*(long *)this + 0x48))(this,this_00);
  ResumableRequestInfo::SetIsBufferWriting
            (*(ResumableRequestInfo **)(this + 0x48),*(Buffer **)(this + 0x70),false);
  return;
}

