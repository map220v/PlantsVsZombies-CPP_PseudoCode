// Class: Sexy::RSBPatcher


/* Sexy::RSBPatcher::~RSBPatcher() */

void __thiscall Sexy::RSBPatcher::~RSBPatcher(RSBPatcher *this)

{
  EA::Thread::Mutex::~Mutex((Mutex *)(this + 0x34));
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  return;
}


/* Sexy::RSBPatcher::Init(Sexy::SexyAppBase*, Sexy::IRSBPatcherListener*, void*) */

void __thiscall
Sexy::RSBPatcher::Init
          (RSBPatcher *this,SexyAppBase *param_1,IRSBPatcherListener *param_2,void *param_3)

{
  *(SexyAppBase **)this = param_1;
  *(IRSBPatcherListener **)(this + 8) = param_2;
  *(void **)(this + 0x10) = param_3;
  *(undefined4 *)(this + 0x5c) = 0;
  this[0x30] = (RSBPatcher)0x0;
  this[0x31] = (RSBPatcher)0x0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 100000;
  return;
}


/* Sexy::RSBPatcher::RSBPatcher(Sexy::SexyAppBase*, Sexy::IRSBPatcherListener*, void*) */

void __thiscall
Sexy::RSBPatcher::RSBPatcher
          (RSBPatcher *this,SexyAppBase *param_1,IRSBPatcherListener *param_2,void *param_3)

{
  Set8BytesTo0(this + 0x18);
  Set8BytesTo0(this + 0x20);
  Set8BytesTo0(this + 0x28);
  CritSect::CritSect((CritSect *)(this + 0x34));
  Init(this,param_1,param_2,param_3);
  return;
}


/* Sexy::RSBPatcher::RSBPatcher(Sexy::SexyAppBase*) */

void __thiscall Sexy::RSBPatcher::RSBPatcher(RSBPatcher *this,SexyAppBase *param_1)

{
  Set8BytesTo0(this + 0x18);
  Set8BytesTo0(this + 0x20);
  Set8BytesTo0(this + 0x28);
  CritSect::CritSect((CritSect *)(this + 0x34));
  Init(this,param_1,(IRSBPatcherListener *)0x0,(void *)0x0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RSBPatcher::GetProgress() const */

void __thiscall Sexy::RSBPatcher::GetProgress(RSBPatcher *this)

{
  ulong uVar1;
  ulong uVar2;
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_10,(CritSect *)(this + 0x34));
  uVar1 = *(ulong *)(this + 0x70);
  uVar2 = *(ulong *)(this + 0x68);
  AutoCrit::~AutoCrit(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((float)((double)uVar1 / (double)uVar2));
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RSBPatcher::GetStatus() const */

void __thiscall Sexy::RSBPatcher::GetStatus(RSBPatcher *this)

{
  undefined4 uVar1;
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_10,(CritSect *)(this + 0x34));
  uVar1 = *(undefined4 *)(this + 0x5c);
  AutoCrit::~AutoCrit(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* Sexy::RSBPatcher::Update() */

void __thiscall Sexy::RSBPatcher::Update(RSBPatcher *this)

{
  int iVar1;
  
  if (this[0x31] == (RSBPatcher)0x0) {
    return;
  }
  iVar1 = GetStatus(this);
  if (this[0x30] == (RSBPatcher)0x0) {
    this[0x30] = (RSBPatcher)0x1;
    if (iVar1 == 3) goto LAB_051a5c20;
    (**(code **)**(undefined8 **)(this + 8))
              (*(undefined8 **)(this + 8),this,*(undefined8 *)(this + 0x10));
  }
  if (iVar1 != 3) {
    if (iVar1 == 5) {
      this[0x31] = (RSBPatcher)0x0;
      (**(code **)(**(long **)(this + 8) + 0x18))
                (*(long **)(this + 8),this,*(undefined8 *)(this + 0x10));
      return;
    }
    if (iVar1 != 2) {
      return;
    }
    this[0x31] = (RSBPatcher)0x0;
    (**(code **)(**(long **)(this + 8) + 8))(*(long **)(this + 8),this,*(undefined8 *)(this + 0x10))
    ;
    return;
  }
LAB_051a5c20:
  this[0x31] = (RSBPatcher)0x0;
  (**(code **)(**(long **)(this + 8) + 0x10))
            (*(long **)(this + 8),this,*(undefined8 *)(this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RSBPatcher::GetErrorReason() const */

void __thiscall Sexy::RSBPatcher::GetErrorReason(RSBPatcher *this)

{
  undefined4 uVar1;
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_10,(CritSect *)(this + 0x34));
  uVar1 = *(undefined4 *)(this + 0x60);
  AutoCrit::~AutoCrit(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* Sexy::RSBPatcher::IsFinished() const */

byte __thiscall Sexy::RSBPatcher::IsFinished(RSBPatcher *this)

{
  return (byte)this[0x31] ^ 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RSBPatcher::SetStatus(Sexy::RSBPatcher::Status) */

void __thiscall Sexy::RSBPatcher::SetStatus(RSBPatcher *this,undefined4 param_2)

{
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_10,(CritSect *)(this + 0x34));
  *(undefined4 *)(this + 0x5c) = param_2;
  AutoCrit::~AutoCrit(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::RSBPatcher::Start(std::string const&, std::string const&, std::string const&) */

void __thiscall
Sexy::RSBPatcher::Start(RSBPatcher *this,string *param_1,string *param_2,string *param_3)

{
  thunk_FUN_05475e00(this + 0x18);
  thunk_FUN_05475e00(this + 0x20,param_2);
  thunk_FUN_05475e00(this + 0x28,param_3);
  SetStatus(this,1);
  this[0x30] = (RSBPatcher)0x0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 100000;
  this[0x31] = (RSBPatcher)0x1;
  LaunchThread(SynchroniousRSBPatchThreadProc,this,2);
  return;
}


/* Sexy::RSBPatcher::Cancel() */

void __thiscall Sexy::RSBPatcher::Cancel(RSBPatcher *this)

{
  SetStatus(this,4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RSBPatcher::SetErrorReason(Sexy::RSBPatcher::ErrorReason) */

void __thiscall Sexy::RSBPatcher::SetErrorReason(RSBPatcher *this,undefined4 param_2)

{
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_10,(CritSect *)(this + 0x34));
  *(undefined4 *)(this + 0x60) = param_2;
  AutoCrit::~AutoCrit(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::RSBPatcher::IsCancelRequested() */

bool __thiscall Sexy::RSBPatcher::IsCancelRequested(RSBPatcher *this)

{
  int iVar1;
  
  iVar1 = GetStatus(this);
  return iVar1 == 4;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RSBPatcher::IncrementTargetRsbBytesProcessed(unsigned long) */

void __thiscall Sexy::RSBPatcher::IncrementTargetRsbBytesProcessed(RSBPatcher *this,ulong param_1)

{
  long lVar1;
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_10,(CritSect *)(this + 0x34));
  lVar1 = *(long *)(this + 0x70);
  *(ulong *)(this + 0x70) = param_1 + lVar1;
  if (*(ulong *)(this + 0x68) < param_1 + lVar1) {
    *(ulong *)(this + 0x70) = *(ulong *)(this + 0x68);
  }
  AutoCrit::~AutoCrit(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RSBPatcher::ApplyDiff(unsigned char*, unsigned long, unsigned char*, unsigned long,
   std::string&) */

void __thiscall
Sexy::RSBPatcher::ApplyDiff
          (RSBPatcher *this,uchar *param_1,ulong param_2,uchar *param_3,ulong param_4,
          string *param_5)

{
  char cVar1;
  undefined1 uVar2;
  char *pcVar3;
  ulong uVar4;
  string asStack_28 [8];
  VCDiffStreamingDecoder aVStack_20 [8];
  OutputString<std::string> aOStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05476128(asStack_28,param_3,param_4,aOStack_18);
  nop();
  open_vcdiff::VCDiffStreamingDecoder::VCDiffStreamingDecoder(aVStack_20);
  open_vcdiff::OutputString<std::string>::OutputString(aOStack_18,param_5);
  open_vcdiff::OutputString<std::string>::clear(aOStack_18);
  if (0x4000000 < param_2) {
    open_vcdiff::VCDiffStreamingDecoder::SetMaximumTargetWindowSize((ulong)aVStack_20);
    open_vcdiff::VCDiffStreamingDecoder::SetMaximumTargetFileSize((ulong)aVStack_20);
  }
  open_vcdiff::VCDiffStreamingDecoder::StartDecoding(aVStack_20,(char *)param_1,param_2);
  pcVar3 = (char *)FUN_054742a4(asStack_28);
  uVar4 = FUN_05474178(asStack_28);
  cVar1 = open_vcdiff::VCDiffStreamingDecoder::DecodeChunkToInterface
                    (aVStack_20,pcVar3,uVar4,(OutputStringInterface *)aOStack_18);
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = open_vcdiff::VCDiffStreamingDecoder::FinishDecoding(aVStack_20);
  }
  open_vcdiff::VCDiffStreamingDecoder::~VCDiffStreamingDecoder(aVStack_20);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RSBPatcher::ApplyPatchHelper(std::string const&, std::string const&, std::string const&) */

void __thiscall
Sexy::RSBPatcher::ApplyPatchHelper(RSBPatcher *this,string *param_1,string *param_2,string *param_3)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  uchar *puVar5;
  uchar *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint local_1b4;
  uint local_1b0;
  uint local_1ac;
  FileWriter aFStack_1a8 [8];
  string asStack_1a0 [8];
  AutoDeleteArray<unsigned_char> aAStack_198 [8];
  undefined1 auStack_190 [8];
  AutoDeleteArray<unsigned_char> aAStack_188 [16];
  uint local_178 [2];
  undefined1 auStack_170 [8];
  int local_168;
  int local_164;
  int local_160;
  ulong local_158;
  uint local_150;
  undefined1 auStack_14c [16];
  uint local_13c;
  int local_138;
  ResStreamsUnpacker aRStack_130 [64];
  FileWrapper aFStack_f0 [64];
  int local_b0;
  uint local_ac;
  char acStack_a8 [128];
  undefined1 auStack_28 [16];
  uchar auStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SetErrorReason(this,0);
  ResStreamsUnpacker::ResStreamsUnpacker(aRStack_130,*(SexyAppBase **)this);
  cVar1 = ResStreamsUnpacker::Init((string *)aRStack_130);
  if (cVar1 == '\0') {
    SetErrorReason(this,5);
    bVar3 = 0;
    goto LAB_051abbcc;
  }
  cVar1 = IsCancelRequested(this);
  if (cVar1 != '\0') {
    bVar3 = 0;
    goto LAB_051abbcc;
  }
  uVar8 = *(undefined8 *)this;
  FUN_05475d88((string *)local_178,param_2);
  FileWrapper::FileWrapper(aFStack_f0,uVar8,(string *)local_178,0x10000);
  std::string::~string((string *)local_178);
  iVar4 = FileWrapper::Read(aFStack_f0,(uchar *)&local_168,0x38);
  bVar3 = 0;
  if (iVar4 == -1) {
    SetErrorReason(this,1);
  }
  else {
    cVar1 = IsCancelRequested(this);
    if (cVar1 == '\0') {
      bVar2 = (bool)BaseTask::IsExecuting((BaseTask *)aRStack_130);
      local_168 = ByteSwapInt(local_168,bVar2);
      local_164 = ByteSwapInt(local_164,bVar2);
      local_160 = ByteSwapInt(local_160,bVar2);
      local_158 = ByteSwapUINT64(local_158,bVar2);
      local_150 = ByteSwapInt(local_150,bVar2);
      local_13c = ByteSwapInt(local_13c,bVar2);
      local_138 = ByteSwapInt(local_138,bVar2);
      if (local_168 == 0x52534250) {
        if ((local_164 == 1) && (local_160 == 2)) {
          AutoCrit::AutoCrit((AutoCrit *)local_178,(CritSect *)(this + 0x34));
          *(ulong *)(this + 0x68) = local_158;
          AutoCrit::~AutoCrit((AutoCrit *)local_178);
          FileWriter::FileWriter(aFStack_1a8,param_3);
          cVar1 = std::__exception_ptr::exception_ptr::operator!((exception_ptr *)aFStack_1a8);
          if (cVar1 == '\0') {
            bVar3 = IsCancelRequested(this);
            if (bVar3 == 0) {
              local_1b4 = (uint)bVar3;
              puVar5 = (uchar *)ResStreamsUnpacker::GetCommonData(aRStack_130,&local_1b4);
              if (puVar5 == (uchar *)0x0) {
                SetErrorReason(this,5);
                goto LAB_051abdc8;
              }
              cVar1 = IsCancelRequested(this);
              if (cVar1 == '\0') {
                if (local_138 == 0) {
                  uVar7 = (ulong)local_1b4;
                  cVar1 = FileWriter::Write(aFStack_1a8,puVar5,uVar7);
                  if (cVar1 == '\0') goto LAB_051abdb8;
                  IncrementTargetRsbBytesProcessed(this,uVar7);
                }
                else if (local_138 == 1) {
                  puVar6 = operator_new__((ulong)local_150);
                  AutoDeleteArray<unsigned_char>::AutoDeleteArray
                            ((AutoDeleteArray<unsigned_char> *)local_178,puVar6);
                  iVar4 = FileWrapper::Read(aFStack_f0,puVar6,(ulong)local_150);
                  if (iVar4 == -1) {
                    SetErrorReason(this,1);
                  }
                  else {
                    cVar1 = IsCancelRequested(this);
                    if (cVar1 == '\0') {
                      calcBufferContentsMd5Digest(puVar5,local_1b4,auStack_18);
                      iVar4 = memcmp(auStack_18,auStack_14c,0x10);
                      if (iVar4 == 0) {
                        cVar1 = IsCancelRequested(this);
                        if (cVar1 == '\0') {
                          Set8BytesTo0((string *)aAStack_188);
                          cVar1 = ApplyDiff(this,puVar5,(ulong)local_1b4,puVar6,(ulong)local_150,
                                            (string *)aAStack_188);
                          if (cVar1 == '\0') {
                            SetErrorReason(this,7);
                          }
                          else {
                            uVar7 = FUN_05474178((string *)aAStack_188);
                            puVar5 = (uchar *)FUN_054742a4((string *)aAStack_188);
                            cVar1 = FileWriter::Write(aFStack_1a8,puVar5,uVar7);
                            if (cVar1 != '\0') {
                              IncrementTargetRsbBytesProcessed(this,uVar7 & 0xffffffff);
                              std::string::~string((string *)aAStack_188);
                              AutoDeleteArray<unsigned_char>::~AutoDeleteArray
                                        ((AutoDeleteArray<unsigned_char> *)local_178);
                              goto LAB_051abea0;
                            }
                            SetErrorReason(this,6);
                          }
                          std::string::~string((string *)aAStack_188);
                        }
                      }
                      else {
                        SetErrorReason(this,4);
                      }
                    }
                  }
                  AutoDeleteArray<unsigned_char>::~AutoDeleteArray
                            ((AutoDeleteArray<unsigned_char> *)local_178);
                  bVar3 = 0;
                  goto LAB_051abdc8;
                }
LAB_051abea0:
                cVar1 = IsCancelRequested(this);
                if (cVar1 == '\0') {
                  for (uVar9 = 0; uVar9 < local_13c; uVar9 = uVar9 + 1) {
                    local_1b0 = 0;
                    iVar4 = FileWrapper::Read(aFStack_f0,(uchar *)&local_b0,0x98);
                    bVar3 = 0;
                    if (iVar4 == 0) {
                      SetErrorReason(this,1);
                      goto LAB_051abdc8;
                    }
                    cVar1 = IsCancelRequested(this);
                    if (cVar1 != '\0') goto LAB_051abdc8;
                    local_1ac = 0;
                    std::string::string((string *)local_178,acStack_a8);
                    puVar5 = (uchar *)ResStreamsUnpacker::AllocResGroupData
                                                (aRStack_130,(string *)local_178,&local_1ac);
                    std::string::~string((string *)local_178);
                    nop();
                    AutoDeleteArray<unsigned_char>::AutoDeleteArray(aAStack_198,puVar5);
                    cVar1 = IsCancelRequested(this);
                    if (cVar1 != '\0') {
LAB_051ac198:
                      AutoDeleteArray<unsigned_char>::~AutoDeleteArray(aAStack_198);
                      goto LAB_051abdc8;
                    }
                    local_ac = ByteSwapInt(local_ac,bVar2);
                    local_b0 = ByteSwapInt(local_b0,bVar2);
                    if (local_b0 == 0) {
                      local_1b0 = local_1ac;
                      cVar1 = FileWriter::Write(aFStack_1a8,puVar5,(ulong)local_1ac);
                      if (cVar1 == '\0') {
                        SetErrorReason(this,6);
                      }
                      else {
                        cVar1 = IsCancelRequested(this);
                        if (cVar1 == '\0') goto LAB_051ac078;
                      }
                      goto LAB_051ac198;
                    }
                    if (local_b0 == 1) {
                      puVar6 = operator_new__((ulong)local_ac);
                      AutoDeleteArray<unsigned_char>::AutoDeleteArray(aAStack_188,puVar6);
                      iVar4 = FileWrapper::Read(aFStack_f0,puVar6,(ulong)local_ac);
                      if (iVar4 == 0) {
                        SetErrorReason(this,1);
                      }
                      else {
                        cVar1 = IsCancelRequested(this);
                        if (cVar1 == '\0') {
                          if ((puVar5 != (uchar *)0x0) &&
                             (cVar1 = IsGpuDataCompressed(puVar5,bVar2), cVar1 != '\0')) {
                            puVar5 = (uchar *)DecompressResGroupGpuData(puVar5,bVar2,&local_1ac);
                            FUN_051a4da4(auStack_190);
                            FUN_02fd47e0(auStack_190,puVar5);
                          }
                          Set8BytesTo0();
                          cVar1 = ApplyDiff(this,puVar5,(ulong)local_1ac,puVar6,(ulong)local_ac,
                                            asStack_1a0);
                          if (cVar1 == '\0') {
                            SetErrorReason(this,7);
                          }
                          else {
                            local_1b0 = FUN_05474178(asStack_1a0);
                            puVar6 = (uchar *)FUN_054742a4(asStack_1a0);
                            AutoDeleteArray<unsigned_char>::AutoDeleteArray
                                      ((AutoDeleteArray<unsigned_char> *)local_178,(uchar *)0x0);
                            cVar1 = IsGpuDataCompressed(puVar6,bVar2);
                            if (cVar1 != '\0') {
                              puVar6 = (uchar *)CompressResGroupGpuData(puVar6,bVar2,&local_1b0);
                              FUN_02fd47e0(auStack_170,puVar6);
                            }
                            cVar1 = FileWriter::Write(aFStack_1a8,puVar6,(ulong)local_1b0);
                            if (cVar1 == '\0') {
                              SetErrorReason(this,6);
                            }
                            else {
                              cVar1 = IsCancelRequested(this);
                              if (cVar1 == '\0') {
                                calcBufferContentsMd5Digest(puVar5,local_1ac,auStack_18);
                                iVar4 = memcmp(auStack_18,auStack_28,0x10);
                                if (iVar4 == 0) {
                                  cVar1 = IsCancelRequested(this);
                                  if (cVar1 == '\0') {
                                    AutoDeleteArray<unsigned_char>::~AutoDeleteArray
                                              ((AutoDeleteArray<unsigned_char> *)local_178);
                                    std::string::~string(asStack_1a0);
                                    AutoDeleteArray<unsigned_char>::~AutoDeleteArray(aAStack_188);
                                    goto LAB_051ac078;
                                  }
                                }
                                else {
                                  SetErrorReason(this,4);
                                }
                              }
                            }
                            AutoDeleteArray<unsigned_char>::~AutoDeleteArray
                                      ((AutoDeleteArray<unsigned_char> *)local_178);
                          }
                          std::string::~string(asStack_1a0);
                        }
                      }
                      AutoDeleteArray<unsigned_char>::~AutoDeleteArray(aAStack_188);
                      goto LAB_051ac198;
                    }
LAB_051ac078:
                    IncrementTargetRsbBytesProcessed(this,(ulong)local_1b0);
                    AutoDeleteArray<unsigned_char>::~AutoDeleteArray(aAStack_198);
                  }
                  local_178[0] = 0;
                  bVar3 = FileWriter::PadTo(aFStack_1a8,0x800,local_178);
                  if (bVar3 == 0) {
                    SetErrorReason(this,6);
                  }
                  else {
                    IncrementTargetRsbBytesProcessed(this,(ulong)local_178[0]);
                    cVar1 = IsCancelRequested(this);
                    if (cVar1 != '\0') goto LAB_051abde4;
                    AutoCrit::AutoCrit((AutoCrit *)local_178,(CritSect *)(this + 0x34));
                    if (*(long *)(this + 0x70) != *(long *)(this + 0x68)) {
                      *(long *)(this + 0x70) = *(long *)(this + 0x68);
                    }
                    AutoCrit::~AutoCrit((AutoCrit *)local_178);
                  }
                  goto LAB_051abdc8;
                }
              }
            }
LAB_051abde4:
            bVar3 = 0;
          }
          else {
LAB_051abdb8:
            bVar3 = 0;
            SetErrorReason(this,6);
          }
LAB_051abdc8:
          FileWriter::~FileWriter(aFStack_1a8);
        }
        else {
          bVar3 = 0;
          SetErrorReason(this,3);
        }
      }
      else {
        SetErrorReason(this,2);
      }
    }
  }
  FileWrapper::~FileWrapper(aFStack_f0);
LAB_051abbcc:
  ResStreamsUnpacker::~ResStreamsUnpacker(aRStack_130);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* Sexy::RSBPatcher::ApplyPatch(std::string const&, std::string const&, std::string const&) */

char __thiscall
Sexy::RSBPatcher::ApplyPatch(RSBPatcher *this,string *param_1,string *param_2,string *param_3)

{
  char cVar1;
  char cVar2;
  
  cVar1 = ApplyPatchHelper(this,param_1,param_2,param_3);
  if ((cVar1 == '\0') &&
     (cVar2 = (**(code **)(**(long **)(*(long *)this + 0x28) + 0x110))
                        (*(long **)(*(long *)this + 0x28),param_3,0), cVar2 != '\0')) {
    (**(code **)(**(long **)(*(long *)this + 0x28) + 0x140))
              (*(long **)(*(long *)this + 0x28),param_3);
    return '\0';
  }
  return cVar1;
}


/* Sexy::RSBPatcher::SynchroniousRSBPatch() */

void __thiscall Sexy::RSBPatcher::SynchroniousRSBPatch(RSBPatcher *this)

{
  char cVar1;
  char cVar2;
  
  cVar1 = ApplyPatch(this,(string *)(this + 0x18),(string *)(this + 0x20),(string *)(this + 0x28));
  cVar2 = IsCancelRequested(this);
  if (cVar2 != '\0') {
    SetStatus(this,5);
    return;
  }
  if (cVar1 != '\0') {
    SetStatus(this,2);
    return;
  }
  SetStatus(this,3);
  return;
}


/* Sexy::RSBPatcher::SynchroniousRSBPatchThreadProc(void*) */

void Sexy::RSBPatcher::SynchroniousRSBPatchThreadProc(void *param_1)

{
  char cVar1;
  char cVar2;
  
  cVar1 = ApplyPatch(param_1,(string *)((long)param_1 + 0x18),(string *)((long)param_1 + 0x20),
                     (string *)((long)param_1 + 0x28));
  cVar2 = IsCancelRequested(param_1);
  if (cVar2 != '\0') {
    SetStatus(param_1,5);
    return;
  }
  if (cVar1 != '\0') {
    SetStatus(param_1,2);
    return;
  }
  SetStatus(param_1,3);
  return;
}

