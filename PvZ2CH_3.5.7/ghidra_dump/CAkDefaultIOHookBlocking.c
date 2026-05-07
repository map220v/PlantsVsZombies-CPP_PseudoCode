// Class: CAkDefaultIOHookBlocking


/* CAkDefaultIOHookBlocking::GetBlockSize(AkFileDesc&) */

undefined8 CAkDefaultIOHookBlocking::GetBlockSize(AkFileDesc *param_1)

{
  return 1;
}


/* non-virtual thunk to CAkDefaultIOHookBlocking::GetBlockSize(AkFileDesc&) */

void __thiscall
CAkDefaultIOHookBlocking::GetBlockSize(CAkDefaultIOHookBlocking *this,AkFileDesc *param_1)

{
  GetBlockSize((AkFileDesc *)(this + -8));
  return;
}


/* CAkDefaultIOHookBlocking::GetDeviceDesc(AkDeviceDesc&) */

void CAkDefaultIOHookBlocking::GetDeviceDesc(AkDeviceDesc *param_1)

{
  return;
}


/* non-virtual thunk to CAkDefaultIOHookBlocking::GetDeviceDesc(AkDeviceDesc&) */

void __thiscall
CAkDefaultIOHookBlocking::GetDeviceDesc(CAkDefaultIOHookBlocking *this,AkDeviceDesc *param_1)

{
  GetDeviceDesc((AkDeviceDesc *)(this + -8));
  return;
}


/* CAkDefaultIOHookBlocking::GetDeviceData() */

CAkDefaultIOHookBlocking __thiscall
CAkDefaultIOHookBlocking::GetDeviceData(CAkDefaultIOHookBlocking *this)

{
  return this[0x328];
}


/* non-virtual thunk to CAkDefaultIOHookBlocking::GetDeviceData() */

void __thiscall CAkDefaultIOHookBlocking::GetDeviceData(CAkDefaultIOHookBlocking *this)

{
  GetDeviceData(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CAkDefaultIOHookBlocking::Read(AkFileDesc&, AkIoHeuristics const&, void*, AkIOTransferInfo&) */

void __thiscall
CAkDefaultIOHookBlocking::Read
          (CAkDefaultIOHookBlocking *this,AkFileDesc *param_1,AkIoHeuristics *param_2,void *param_3,
          AkIOTransferInfo *param_4)

{
  int iVar1;
  size_t sVar2;
  undefined4 uVar3;
  fpos_t local_10;
  
  local_10.__pos = *(__off_t *)param_4;
  uVar3 = 2;
  local_10.__state = ___stack_chk_guard;
  iVar1 = fsetpos(*(FILE **)(param_1 + 0x18),&local_10);
  if (iVar1 == 0) {
    sVar2 = fread(param_3,1,(ulong)*(uint *)(param_4 + 0xc),*(FILE **)(param_1 + 0x18));
    uVar3 = 2;
    if (sVar2 != 0) {
      uVar3 = 1;
    }
  }
  if (local_10.__state != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


/* non-virtual thunk to CAkDefaultIOHookBlocking::Read(AkFileDesc&, AkIoHeuristics const&, void*,
   AkIOTransferInfo&) */

void __thiscall
CAkDefaultIOHookBlocking::Read
          (CAkDefaultIOHookBlocking *this,AkFileDesc *param_1,AkIoHeuristics *param_2,void *param_3,
          AkIOTransferInfo *param_4)

{
  Read(this + -8,param_1,param_2,param_3,param_4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CAkDefaultIOHookBlocking::Write(AkFileDesc&, AkIoHeuristics const&, void*, AkIOTransferInfo&) */

void __thiscall
CAkDefaultIOHookBlocking::Write
          (CAkDefaultIOHookBlocking *this,AkFileDesc *param_1,AkIoHeuristics *param_2,void *param_3,
          AkIOTransferInfo *param_4)

{
  int iVar1;
  undefined8 uVar2;
  size_t sVar3;
  fpos_t local_10;
  
  local_10.__pos = *(__off_t *)param_4;
  local_10.__state = ___stack_chk_guard;
  iVar1 = fsetpos(*(FILE **)(param_1 + 0x18),&local_10);
  if ((iVar1 == 0) &&
     (sVar3 = fwrite(param_3,1,(ulong)*(uint *)(param_4 + 0xc),*(FILE **)(param_1 + 0x18)),
     sVar3 != 0)) {
    fflush(*(FILE **)(param_1 + 0x18));
    uVar2 = 1;
  }
  else {
    uVar2 = 2;
  }
  if (local_10.__state == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* non-virtual thunk to CAkDefaultIOHookBlocking::Write(AkFileDesc&, AkIoHeuristics const&, void*,
   AkIOTransferInfo&) */

void __thiscall
CAkDefaultIOHookBlocking::Write
          (CAkDefaultIOHookBlocking *this,AkFileDesc *param_1,AkIoHeuristics *param_2,void *param_3,
          AkIOTransferInfo *param_4)

{
  Write(this + -8,param_1,param_2,param_3,param_4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CAkDefaultIOHookBlocking::Open(char const*, AkOpenMode, AkFileSystemFlags*, bool&, AkFileDesc&)
    */

void __thiscall
CAkDefaultIOHookBlocking::Open
          (CAkDefaultIOHookBlocking *this,undefined8 param_1,undefined4 param_3,undefined8 param_4,
          char *param_5,__off_t *param_6)

{
  long *__file;
  undefined4 uVar1;
  int iVar2;
  stat asStack_190 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*param_5 == '\0') && (this[0x328] != (CAkDefaultIOHookBlocking)0x0)) {
    uVar1 = *(undefined4 *)(this + 0x324);
    iVar2 = 1;
    *param_6 = 0;
    *(undefined4 *)(param_6 + 1) = 0;
    *(undefined4 *)(param_6 + 4) = uVar1;
    param_6[2] = 0;
    *(undefined4 *)((long)param_6 + 0xc) = 0;
    goto LAB_052f20ec;
  }
  __file = asStack_190[0].__unused + 1;
  *param_5 = '\x01';
  iVar2 = CAkFileLocationBase::GetFullFilePath
                    ((CAkFileLocationBase *)(this + 0x10),param_1,param_4,param_3,__file);
  if (iVar2 == 1) {
    iVar2 = FUN_052f1fd4(__file,param_3,param_6 + 3);
    if (iVar2 != 1) goto LAB_052f20ec;
    iVar2 = stat((char *)__file,asStack_190);
    if (iVar2 == 0) {
      uVar1 = *(undefined4 *)(this + 0x324);
      *param_6 = asStack_190[0].st_size;
      *(undefined4 *)(param_6 + 1) = 0;
      *(undefined4 *)(param_6 + 4) = uVar1;
      param_6[2] = 0;
      *(undefined4 *)((long)param_6 + 0xc) = 0;
      iVar2 = 1;
      goto LAB_052f20ec;
    }
  }
  iVar2 = 2;
LAB_052f20ec:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CAkDefaultIOHookBlocking::Open(unsigned int, AkOpenMode, AkFileSystemFlags*, bool&, AkFileDesc&)
    */

void __thiscall
CAkDefaultIOHookBlocking::Open
          (CAkDefaultIOHookBlocking *this,undefined8 param_2,undefined4 param_3,undefined8 param_4,
          char *param_5,__off_t *param_6)

{
  long *__file;
  undefined4 uVar1;
  int iVar2;
  stat asStack_190 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*param_5 == '\0') && (this[0x328] != (CAkDefaultIOHookBlocking)0x0)) {
    uVar1 = *(undefined4 *)(this + 0x324);
    iVar2 = 1;
    *param_6 = 0;
    *(undefined4 *)(param_6 + 1) = 0;
    *(undefined4 *)(param_6 + 4) = uVar1;
    param_6[2] = 0;
    *(undefined4 *)((long)param_6 + 0xc) = 0;
    goto LAB_052f2208;
  }
  __file = asStack_190[0].__unused + 1;
  *param_5 = '\x01';
  iVar2 = CAkFileLocationBase::GetFullFilePath
                    ((CAkFileLocationBase *)(this + 0x10),param_2,param_4,param_3,__file);
  if (iVar2 == 1) {
    iVar2 = FUN_052f1fd4(__file,param_3,param_6 + 3);
    if (iVar2 != 1) goto LAB_052f2208;
    iVar2 = stat((char *)__file,asStack_190);
    if (iVar2 == 0) {
      uVar1 = *(undefined4 *)(this + 0x324);
      *param_6 = asStack_190[0].st_size;
      *(undefined4 *)(param_6 + 1) = 0;
      *(undefined4 *)(param_6 + 4) = uVar1;
      param_6[2] = 0;
      *(undefined4 *)((long)param_6 + 0xc) = 0;
      iVar2 = 1;
      goto LAB_052f2208;
    }
  }
  iVar2 = 2;
LAB_052f2208:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}


/* CAkDefaultIOHookBlocking::~CAkDefaultIOHookBlocking() */

void __thiscall CAkDefaultIOHookBlocking::~CAkDefaultIOHookBlocking(CAkDefaultIOHookBlocking *this)

{
  *(undefined ***)this = &PTR__CAkDefaultIOHookBlocking_06a34680;
  *(undefined ***)(this + 8) = &PTR__CAkDefaultIOHookBlocking_06a346e0;
  *(undefined ***)(this + 0x10) = &PTR__CAkDefaultIOHookBlocking_06a34730;
  nop();
  return;
}


/* non-virtual thunk to CAkDefaultIOHookBlocking::~CAkDefaultIOHookBlocking() */

void __thiscall CAkDefaultIOHookBlocking::~CAkDefaultIOHookBlocking(CAkDefaultIOHookBlocking *this)

{
  ~CAkDefaultIOHookBlocking(this + -0x10);
  return;
}


/* non-virtual thunk to CAkDefaultIOHookBlocking::~CAkDefaultIOHookBlocking() */

void __thiscall CAkDefaultIOHookBlocking::~CAkDefaultIOHookBlocking(CAkDefaultIOHookBlocking *this)

{
  ~CAkDefaultIOHookBlocking(this + -8);
  return;
}


/* CAkDefaultIOHookBlocking::~CAkDefaultIOHookBlocking() */

void __thiscall CAkDefaultIOHookBlocking::~CAkDefaultIOHookBlocking(CAkDefaultIOHookBlocking *this)

{
  ~CAkDefaultIOHookBlocking(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CAkDefaultIOHookBlocking::~CAkDefaultIOHookBlocking() */

void __thiscall CAkDefaultIOHookBlocking::~CAkDefaultIOHookBlocking(CAkDefaultIOHookBlocking *this)

{
  ~CAkDefaultIOHookBlocking(this + -0x10);
  return;
}


/* non-virtual thunk to CAkDefaultIOHookBlocking::~CAkDefaultIOHookBlocking() */

void __thiscall CAkDefaultIOHookBlocking::~CAkDefaultIOHookBlocking(CAkDefaultIOHookBlocking *this)

{
  ~CAkDefaultIOHookBlocking(this + -8);
  return;
}


/* CAkDefaultIOHookBlocking::Close(AkFileDesc&) */

void __thiscall CAkDefaultIOHookBlocking::Close(CAkDefaultIOHookBlocking *this,AkFileDesc *param_1)

{
  CAkFileHelpers::CloseFile(*(__sFILE **)(param_1 + 0x18));
  return;
}


/* non-virtual thunk to CAkDefaultIOHookBlocking::Close(AkFileDesc&) */

void __thiscall CAkDefaultIOHookBlocking::Close(CAkDefaultIOHookBlocking *this,AkFileDesc *param_1)

{
  Close(this + -8,param_1);
  return;
}


/* CAkDefaultIOHookBlocking::CAkDefaultIOHookBlocking() */

void __thiscall CAkDefaultIOHookBlocking::CAkDefaultIOHookBlocking(CAkDefaultIOHookBlocking *this)

{
  AK::StreamMgr::IAkFileLocationResolver::IAkFileLocationResolver((IAkFileLocationResolver *)this);
  AK::StreamMgr::IAkIOHookBlocking::IAkIOHookBlocking((IAkIOHookBlocking *)(this + 8));
  CAkFileLocationBase::CAkFileLocationBase((CAkFileLocationBase *)(this + 0x10));
  *(undefined4 *)(this + 0x324) = 0xffffffff;
  *(undefined ***)this = &PTR__CAkDefaultIOHookBlocking_06a34680;
  *(undefined ***)(this + 8) = &PTR__CAkDefaultIOHookBlocking_06a346e0;
  *(undefined ***)(this + 0x10) = &PTR__CAkDefaultIOHookBlocking_06a34730;
  this[0x328] = (CAkDefaultIOHookBlocking)0x0;
  return;
}


/* CAkDefaultIOHookBlocking::Init(AkDeviceSettings const&, bool) */

undefined4 __thiscall
CAkDefaultIOHookBlocking::Init
          (CAkDefaultIOHookBlocking *this,AkDeviceSettings *param_1,bool param_2)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  uVar3 = 2;
  if (*(int *)(param_1 + 0x18) == 1) {
    this[0x328] = (CAkDefaultIOHookBlocking)param_2;
    lVar2 = FUN_0548fc88();
    if (lVar2 == 0) {
      FUN_0548fc94(this);
    }
    iVar1 = FUN_05490760(param_1,this + 8);
    *(int *)(this + 0x324) = iVar1;
    uVar3 = 2;
    if (iVar1 != -1) {
      uVar3 = 1;
    }
  }
  return uVar3;
}


/* CAkDefaultIOHookBlocking::Term() */

void __thiscall CAkDefaultIOHookBlocking::Term(CAkDefaultIOHookBlocking *this)

{
  CAkDefaultIOHookBlocking *pCVar1;
  
  pCVar1 = (CAkDefaultIOHookBlocking *)FUN_0548fc88();
  if (this != pCVar1) {
    FUN_0548fcac(*(undefined4 *)(this + 0x324));
    return;
  }
  FUN_0548fc94(0);
  FUN_0548fcac(*(undefined4 *)(this + 0x324));
  return;
}

