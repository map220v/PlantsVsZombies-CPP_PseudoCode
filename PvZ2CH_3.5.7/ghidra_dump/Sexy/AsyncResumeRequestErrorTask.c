// Class: Sexy::AsyncResumeRequestErrorTask


/* Sexy::AsyncResumeRequestErrorTask::~AsyncResumeRequestErrorTask() */

void __thiscall
Sexy::AsyncResumeRequestErrorTask::~AsyncResumeRequestErrorTask(AsyncResumeRequestErrorTask *this)

{
  *(undefined ***)this = &PTR__AsyncResumeRequestErrorTask_06a30760;
  std::string::~string((string *)(this + 0x68));
  AsyncMainThreadTask::~AsyncMainThreadTask((AsyncMainThreadTask *)this);
  return;
}


/* Sexy::AsyncResumeRequestErrorTask::~AsyncResumeRequestErrorTask() */

void __thiscall
Sexy::AsyncResumeRequestErrorTask::~AsyncResumeRequestErrorTask(AsyncResumeRequestErrorTask *this)

{
  ~AsyncResumeRequestErrorTask(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::AsyncResumeRequestErrorTask::AsyncResumeRequestErrorTask(Sexy::ResumableRequestInfo*,
   Sexy::NetworkServiceListener*, void const*, int) */

void __thiscall
Sexy::AsyncResumeRequestErrorTask::AsyncResumeRequestErrorTask
          (AsyncResumeRequestErrorTask *this,ResumableRequestInfo *param_1,
          NetworkServiceListener *param_2,void *param_3,int param_4)

{
  AsyncMainThreadTask::AsyncMainThreadTask((AsyncMainThreadTask *)this);
  *(ResumableRequestInfo **)(this + 0x48) = param_1;
  *(NetworkServiceListener **)(this + 0x50) = param_2;
  *(undefined ***)this = &PTR__AsyncResumeRequestErrorTask_06a30760;
  *(void **)(this + 0x58) = param_3;
  *(int *)(this + 0x60) = param_4;
  Set8BytesTo0(this + 0x68);
  thunk_FUN_05475e00(this + 8,&DAT_06bbda88);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AsyncResumeRequestErrorTask::RunImpl() */

void __thiscall Sexy::AsyncResumeRequestErrorTask::RunImpl(AsyncResumeRequestErrorTask *this)

{
  char *pcVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_90 [8];
  string asStack_88 [8];
  StructuredData aSStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_90,"ResumeRequestError: ");
  nop();
  StructuredData::StructuredData(aSStack_80);
  StructuredData::Clear(aSStack_80);
  StructuredData::BeginObject(aSStack_80);
  StructuredData::AddInteger(aSStack_80,"errorID",(long)*(int *)(this + 0x60));
  (**(code **)**(undefined8 **)(this + 0x50))
            (asStack_88,*(undefined8 **)(this + 0x50),*(undefined4 *)(this + 0x60));
  pcVar1 = (char *)FUN_0547429c(asStack_88);
  StructuredData::AddString(aSStack_80,"error",pcVar1);
  std::string::~string(asStack_88);
  StructuredData::EndObject(aSStack_80);
  plVar2 = (long *)ResumableRequestInfo::TakeResumableInfoAndMarkForCancellation
                             (*(ResumableRequestInfo **)(this + 0x48),false);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  pcVar3 = *(code **)(**(long **)(this + 0x50) + 0x38);
  if (pcVar3 != DummyNetworkServiceListener::ServiceRequestFailed) {
    (*pcVar3)(*(long **)(this + 0x50),aSStack_80,*(undefined8 *)(this + 0x58));
  }
  StructuredData::~StructuredData(aSStack_80);
  std::string::~string(asStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

