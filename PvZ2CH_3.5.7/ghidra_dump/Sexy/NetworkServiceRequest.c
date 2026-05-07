// Class: Sexy::NetworkServiceRequest


/* Sexy::NetworkServiceRequest::~NetworkServiceRequest() */

void __thiscall Sexy::NetworkServiceRequest::~NetworkServiceRequest(NetworkServiceRequest *this)

{
  std::string::~string((string *)(this + 0x38));
  std::string::~string((string *)(this + 0x30));
  return;
}


/* Sexy::NetworkServiceRequest::NetworkServiceRequest(Sexy::ResumableRequestInfo*, int) */

void __thiscall
Sexy::NetworkServiceRequest::NetworkServiceRequest
          (NetworkServiceRequest *this,ResumableRequestInfo *param_1,int param_2)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  Set8BytesTo0(this + 0x30);
  Set8BytesTo0(this + 0x38);
  *(undefined4 *)(this + 0x58) = 0;
  *(int *)(this + 0x44) = param_2;
  *(ResumableRequestInfo **)(this + 0x50) = param_1;
  this[0x48] = (NetworkServiceRequest)(param_1 != (ResumableRequestInfo *)0x0);
  this[0x5c] = (NetworkServiceRequest)0x0;
  *(undefined8 *)this = 0;
  if (param_1 != (ResumableRequestInfo *)0x0) {
    ResumableRequestInfo::SetParentRequest(param_1,this);
    return;
  }
  return;
}


/* Sexy::NetworkServiceRequest::Refresh() */

void __thiscall Sexy::NetworkServiceRequest::Refresh(NetworkServiceRequest *this)

{
  if (*(ResumableRequestInfo **)(this + 0x50) != (ResumableRequestInfo *)0x0) {
    ResumableRequestInfo::SetParentRequest(*(ResumableRequestInfo **)(this + 0x50),this);
    return;
  }
  return;
}


/* Sexy::NetworkServiceRequest::ConvertToNonResumableRequest() */

void __thiscall
Sexy::NetworkServiceRequest::ConvertToNonResumableRequest(NetworkServiceRequest *this)

{
  this[0x48] = (NetworkServiceRequest)0x0;
  if (*(long **)(this + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x50) + 8))();
  }
  *(undefined8 *)(this + 0x50) = 0;
  return;
}


/* Sexy::NetworkServiceRequest::CancelHttpTransaction() */

void __thiscall Sexy::NetworkServiceRequest::CancelHttpTransaction(NetworkServiceRequest *this)

{
  if (*(long **)this != (long *)0x0) {
    (**(code **)(**(long **)this + 0x40))();
    *(undefined8 *)this = 0;
  }
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
    *(undefined8 *)(this + 8) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::NetworkServiceRequest::GetResumableRequestInfo() */

void __thiscall Sexy::NetworkServiceRequest::GetResumableRequestInfo(NetworkServiceRequest *this)

{
  undefined8 uVar1;
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_10,(CritSect *)gNetworkServiceRequestLock);
  uVar1 = *(undefined8 *)(this + 0x50);
  AutoCrit::~AutoCrit(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::NetworkServiceRequest::GetCancelState() */

void __thiscall Sexy::NetworkServiceRequest::GetCancelState(NetworkServiceRequest *this)

{
  undefined4 uVar1;
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_10,(CritSect *)gNetworkServiceRequestLock);
  uVar1 = *(undefined4 *)(this + 0x58);
  AutoCrit::~AutoCrit(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::NetworkServiceRequest::SetCancelState(Sexy::NetworkServiceRequest::CancelState) */

void __thiscall
Sexy::NetworkServiceRequest::SetCancelState(NetworkServiceRequest *this,undefined4 param_2)

{
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_10,(CritSect *)gNetworkServiceRequestLock);
  *(undefined4 *)(this + 0x58) = param_2;
  AutoCrit::~AutoCrit(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::NetworkServiceRequest::Release() */

void __thiscall Sexy::NetworkServiceRequest::Release(NetworkServiceRequest *this)

{
  CancelHttpTransaction(this);
  if (*(long **)(this + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x50) + 8))();
  }
  *(undefined8 *)(this + 0x50) = 0;
  SetCancelState(this,3);
  return;
}


/* Sexy::NetworkServiceRequest::AbortCancelRequest() */

void __thiscall Sexy::NetworkServiceRequest::AbortCancelRequest(NetworkServiceRequest *this)

{
  SetCancelState(this,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::NetworkServiceRequest::MarkForCancellation(bool) */

void __thiscall
Sexy::NetworkServiceRequest::MarkForCancellation(NetworkServiceRequest *this,bool param_1)

{
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_10,(CritSect *)gNetworkServiceRequestLock);
  SetCancelState(this,1);
  this[0x5c] = (NetworkServiceRequest)param_1;
  AutoCrit::~AutoCrit(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::NetworkServiceRequest::TakeResumableInfoAndMarkForCancellation(bool) */

void __thiscall
Sexy::NetworkServiceRequest::TakeResumableInfoAndMarkForCancellation
          (NetworkServiceRequest *this,bool param_1)

{
  ResumableRequestInfo *this_00;
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_10,(CritSect *)gNetworkServiceRequestLock);
  this_00 = *(ResumableRequestInfo **)(this + 0x50);
  if (this_00 != (ResumableRequestInfo *)0x0) {
    MarkForCancellation(this,param_1);
    ResumableRequestInfo::SetParentRequest(this_00,(NetworkServiceRequest *)0x0);
  }
  *(undefined8 *)(this + 0x50) = 0;
  AutoCrit::~AutoCrit(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::NetworkServiceRequest::NotifyCancel() */

void __thiscall Sexy::NetworkServiceRequest::NotifyCancel(NetworkServiceRequest *this)

{
  NetworkServiceRequest NVar1;
  code *pcVar2;
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_10,(CritSect *)gNetworkServiceRequestLock);
  NVar1 = this[0x5c];
  AutoCrit::~AutoCrit(aAStack_10);
  if (NVar1 != (NetworkServiceRequest)0x0) {
    pcVar2 = *(code **)(**(long **)(this + 0x18) + 0x40);
    if (pcVar2 != NetworkServiceListener::ServiceRequestCanceled) {
      (*pcVar2)(*(long **)(this + 0x18),*(undefined8 *)(this + 0x10));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::NetworkServiceRequest::CancelImmediate() */

void __thiscall Sexy::NetworkServiceRequest::CancelImmediate(NetworkServiceRequest *this)

{
  NotifyCancel(this);
  Release(this);
  SetCancelState(this,3);
  return;
}


/* Sexy::NetworkServiceRequest::TEMPNAMEPLACEHOLDERVALUE(Sexy::NetworkServiceRequest const&) */

NetworkServiceRequest * __thiscall
Sexy::NetworkServiceRequest::operator=(NetworkServiceRequest *this,NetworkServiceRequest *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  NetworkServiceRequest NVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar9 = *(undefined8 *)param_1;
  uVar8 = *(undefined8 *)(param_1 + 8);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined8 *)this = uVar9;
  *(undefined8 *)(this + 8) = uVar8;
  *(undefined8 *)(this + 0x10) = uVar7;
  *(undefined8 *)(this + 0x18) = uVar6;
  *(undefined8 *)(this + 0x20) = uVar5;
  thunk_FUN_05475e00(this + 0x30,param_1 + 0x30);
  thunk_FUN_05475e00(this + 0x38,param_1 + 0x38);
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  uVar2 = *(undefined4 *)(param_1 + 0x44);
  NVar4 = param_1[0x48];
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  uVar3 = *(undefined4 *)(param_1 + 0x58);
  this[0x5c] = param_1[0x5c];
  *(undefined4 *)(this + 0x40) = uVar1;
  *(undefined4 *)(this + 0x44) = uVar2;
  this[0x48] = NVar4;
  *(undefined8 *)(this + 0x50) = uVar5;
  *(undefined4 *)(this + 0x58) = uVar3;
  return this;
}


/* Sexy::NetworkServiceRequest::NetworkServiceRequest(Sexy::NetworkServiceRequest const&) */

void __thiscall
Sexy::NetworkServiceRequest::NetworkServiceRequest
          (NetworkServiceRequest *this,NetworkServiceRequest *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  NetworkServiceRequest NVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar9 = *(undefined8 *)param_1;
  uVar8 = *(undefined8 *)(param_1 + 8);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined8 *)this = uVar9;
  *(undefined8 *)(this + 8) = uVar8;
  *(undefined8 *)(this + 0x10) = uVar7;
  *(undefined8 *)(this + 0x18) = uVar6;
  *(undefined8 *)(this + 0x20) = uVar5;
  FUN_05475d88(this + 0x30,param_1 + 0x30);
  FUN_05475d88(this + 0x38,param_1 + 0x38);
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  uVar2 = *(undefined4 *)(param_1 + 0x44);
  NVar4 = param_1[0x48];
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  uVar3 = *(undefined4 *)(param_1 + 0x58);
  this[0x5c] = param_1[0x5c];
  *(undefined4 *)(this + 0x40) = uVar1;
  *(undefined4 *)(this + 0x44) = uVar2;
  this[0x48] = NVar4;
  *(undefined8 *)(this + 0x50) = uVar5;
  *(undefined4 *)(this + 0x58) = uVar3;
  return;
}


/* Sexy::NetworkServiceRequest::CancelHttpTransactionAndEnterPendingCancel(void*) */

void __thiscall
Sexy::NetworkServiceRequest::CancelHttpTransactionAndEnterPendingCancel
          (NetworkServiceRequest *this,void *param_1)

{
  NetworkServiceManager *this_00;
  
  CancelHttpTransaction(this);
  SetCancelState(this,2);
  this_00 = (NetworkServiceManager *)NetworkServiceManager::DefaultNetworkServiceManager();
  NetworkServiceManager::AddPendingCancelSlot(this_00,param_1);
  return;
}

