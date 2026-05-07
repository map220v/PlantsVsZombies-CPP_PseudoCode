// Class: EA::IO::FileStream


/* EA::IO::FileStream::GetType() const */

undefined8 EA::IO::FileStream::GetType(void)

{
  return 0x34722300;
}


/* EA::IO::FileStream::AddRef() */

void __thiscall EA::IO::FileStream::AddRef(FileStream *this)

{
  *(int *)(this + 0xb8) = *(int *)(this + 0xb8) + 1;
  return;
}


/* EA::IO::FileStream::Release() */

int __thiscall EA::IO::FileStream::Release(FileStream *this)

{
  int iVar1;
  
  if (1 < *(int *)(this + 0xb8)) {
    iVar1 = *(int *)(this + 0xb8) + -1;
    *(int *)(this + 0xb8) = iVar1;
    return iVar1;
  }
  (**(code **)(*(long *)this + 8))();
  return 0;
}


/* EA::IO::FileStream::GetAccessFlags() const */

undefined4 __thiscall EA::IO::FileStream::GetAccessFlags(FileStream *this)

{
  return *(undefined4 *)(this + 0xbc);
}


/* EA::IO::FileStream::GetState() const */

undefined4 __thiscall EA::IO::FileStream::GetState(FileStream *this)

{
  return *(undefined4 *)(this + 0xcc);
}


/* EA::IO::FileStream::GetAvailable() const */

long __thiscall EA::IO::FileStream::GetAvailable(FileStream *this)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (**(code **)(*(long *)this + 0x50))(this,2);
  lVar1 = -1;
  if (lVar2 != -1) {
    lVar1 = -lVar2;
  }
  return lVar1;
}


/* EA::IO::FileStream::SetPath(char16_t const*) */

void __thiscall EA::IO::FileStream::SetPath(FileStream *this,wchar16 *param_1)

{
  if ((param_1 != (wchar16 *)0x0) && (*(int *)(this + 0x20) == -1)) {
    ConvertPath((PathString8 *)(this + 0x28),param_1);
    return;
  }
  return;
}


/* EA::IO::FileStream::SetPath(char32_t const*) */

void __thiscall EA::IO::FileStream::SetPath(FileStream *this,wchar32 *param_1)

{
  if ((param_1 != (wchar32 *)0x0) && (*(int *)(this + 0x20) == -1)) {
    ConvertPath((PathString8 *)(this + 0x28),param_1);
    return;
  }
  return;
}


/* EA::IO::FileStream::SetPath(wchar_t const*) */

void __thiscall EA::IO::FileStream::SetPath(FileStream *this,wchar_t *param_1)

{
  if ((param_1 != (wchar_t *)0x0) && (*(int *)(this + 0x20) == -1)) {
    ConvertPath((PathString8 *)(this + 0x28),param_1);
    return;
  }
  return;
}


/* EA::IO::FileStream::GetPosition(EA::IO::PositionType) const */

__off_t __thiscall EA::IO::FileStream::GetPosition(FileStream *this,int param_2)

{
  int __fd;
  __off_t _Var1;
  __off_t _Var2;
  long lVar3;
  
  if (*(int *)(this + 0xd0) == 1) {
    if (*(long *)(this + 8) != 0) {
      if (param_2 == 0) {
        return *(__off_t *)(this + 0x18);
      }
      if (param_2 != 2) {
        return 0;
      }
      lVar3 = (**(code **)(*(long *)this + 0x40))();
      if (lVar3 != -1) {
        return *(long *)(this + 0x18) - lVar3;
      }
      return -1;
    }
  }
  else {
    __fd = *(int *)(this + 0x20);
    if (__fd != -1) {
      if (param_2 == 0) {
        _Var2 = lseek(__fd,0,1);
        return _Var2;
      }
      _Var2 = 0;
      if (param_2 == 2) {
        _Var1 = lseek(__fd,0,1);
        if (_Var1 == -1) {
          return -1;
        }
        lVar3 = (**(code **)(*(long *)this + 0x40))(this);
        _Var2 = _Var1 - lVar3;
        if (lVar3 == -1) {
          _Var2 = _Var1;
        }
      }
      return _Var2;
    }
  }
  return -1;
}


/* EA::IO::FileStream::SetSize(unsigned long) */

undefined8 __thiscall EA::IO::FileStream::SetSize(FileStream *this,ulong param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if (*(int *)(this + 0x20) != -1) {
    iVar1 = ftruncate(*(int *)(this + 0x20),param_1);
    uVar3 = 1;
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)__errno();
      uVar3 = 0;
      *(undefined4 *)(this + 0xcc) = *puVar2;
    }
  }
  return uVar3;
}


/* EA::IO::FileStream::Write(void const*, unsigned long) */

bool __thiscall EA::IO::FileStream::Write(FileStream *this,void *param_1,ulong param_2)

{
  bool bVar1;
  ssize_t sVar2;
  
  bVar1 = false;
  if (*(int *)(this + 0x20) != -1) {
    sVar2 = write(*(int *)(this + 0x20),param_1,param_2);
    bVar1 = sVar2 != -1;
  }
  return bVar1;
}


/* EA::IO::FileStream::Flush() */

undefined8 __thiscall EA::IO::FileStream::Flush(FileStream *this)

{
  if (*(int *)(this + 0x20) != -1) {
    fsync(*(int *)(this + 0x20));
  }
  return 1;
}


/* EA::IO::FileStream::GetPath(char*, unsigned long) */

void __thiscall EA::IO::FileStream::GetPath(FileStream *this,char *param_1,ulong param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_053f94f0(*(undefined8 *)(this + 0x28));
  StdC::Strlcpy(param_1,pcVar1,param_2);
  return;
}


/* EA::IO::FileStream::GetPath(char16_t*, unsigned long) */

long __thiscall EA::IO::FileStream::GetPath(FileStream *this,wchar16 *param_1,ulong param_2)

{
  int iVar1;
  char *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0x28);
  pcVar2 = (char *)FUN_053f94f0(uVar4);
  uVar3 = FUN_053f94d4(uVar4,*(undefined8 *)(this + 0x30));
  iVar1 = StdC::Strlcpy(param_1,pcVar2,param_2,uVar3);
  return (long)iVar1;
}


/* EA::IO::FileStream::GetPath(char32_t*, unsigned long) */

long __thiscall EA::IO::FileStream::GetPath(FileStream *this,wchar32 *param_1,ulong param_2)

{
  int iVar1;
  char *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0x28);
  pcVar2 = (char *)FUN_053f94f0(uVar4);
  uVar3 = FUN_053f94d4(uVar4,*(undefined8 *)(this + 0x30));
  iVar1 = StdC::Strlcpy(param_1,pcVar2,param_2,uVar3);
  return (long)iVar1;
}


/* EA::IO::FileStream::GetPath(wchar_t*, unsigned long) */

long __thiscall EA::IO::FileStream::GetPath(FileStream *this,wchar_t *param_1,ulong param_2)

{
  int iVar1;
  char *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0x28);
  pcVar2 = (char *)FUN_053f94f0(uVar4);
  uVar3 = FUN_053f94d4(uVar4,*(undefined8 *)(this + 0x30));
  iVar1 = StdC::Strlcpy(param_1,pcVar2,param_2,uVar3);
  return (long)iVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::FileStream::Read(void*, unsigned long) */

void __thiscall EA::IO::FileStream::Read(FileStream *this,void *param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  AutoJNIEnv aAStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xd0) == 1) {
    uVar2 = 0;
    AutoJNIEnv::AutoJNIEnv(aAStack_18);
    while (iVar1 = AssetManagerJNI::Read
                             (aAStack_18,*(_jobject **)(this + 8),param_1,param_2 - uVar2),
          iVar1 != -1) {
      uVar2 = uVar2 + (long)iVar1;
      param_1 = (void *)((long)param_1 + (long)iVar1);
      if ((param_2 <= uVar2) || (iVar1 == 0)) break;
    }
    *(ulong *)(this + 0x18) = *(long *)(this + 0x18) + uVar2;
    AutoJNIEnv::~AutoJNIEnv(aAStack_18);
  }
  else {
    uVar2 = 0xffffffffffffffff;
    if (*(int *)(this + 0x20) != -1) {
      uVar2 = read(*(int *)(this + 0x20),param_1,param_2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::FileStream::Close() */

void __thiscall EA::IO::FileStream::Close(FileStream *this)

{
  AutoJNIEnv aAStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xd0) == 1) {
    if (*(long *)(this + 8) != 0) {
      AutoJNIEnv::AutoJNIEnv(aAStack_18);
      AssetManagerJNI::Close(aAStack_18,*(_jobject **)(this + 8));
      *(undefined8 *)(this + 8) = 0;
      AutoJNIEnv::~AutoJNIEnv(aAStack_18);
    }
  }
  else if (*(int *)(this + 0x20) != -1) {
    close(*(int *)(this + 0x20));
    *(undefined4 *)(this + 0xbc) = 0;
    *(undefined4 *)(this + 0xc0) = 0;
    *(undefined4 *)(this + 0x20) = 0xffffffff;
    *(undefined4 *)(this + 0xc4) = 0;
    *(undefined4 *)(this + 200) = 0;
    *(undefined4 *)(this + 0xcc) = 0xfffffffe;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::FileStream::SetPosition(long, EA::IO::PositionType) */

void __thiscall EA::IO::FileStream::SetPosition(FileStream *this,long param_1,int param_3)

{
  bool bVar1;
  __off_t _Var2;
  undefined4 *puVar3;
  long lVar4;
  _jobject *p_Var5;
  int __whence;
  ulong uStack_20;
  AutoJNIEnv aAStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xd0) == 1) {
    if (param_3 == 1) {
      lVar4 = *(long *)(this + 0x18);
      param_1 = param_1 + lVar4;
    }
    else if (param_3 == 2) {
      if (*(long *)(this + 0x10) == -1) goto LAB_053fa30c;
      lVar4 = *(long *)(this + 0x18);
      param_1 = param_1 + *(long *)(this + 0x10);
    }
    else {
      lVar4 = *(long *)(this + 0x18);
    }
    bVar1 = true;
    if (param_1 != lVar4) {
      AutoJNIEnv::AutoJNIEnv(aAStack_18);
      if (*(long *)(this + 0x18) < param_1) {
        lVar4 = AssetManagerJNI::Skip
                          (aAStack_18,*(_jobject **)(this + 8),param_1 - *(long *)(this + 0x18));
        lVar4 = lVar4 + *(long *)(this + 0x18);
        *(long *)(this + 0x18) = lVar4;
      }
      else {
        AssetManagerJNI::Close(aAStack_18,*(_jobject **)(this + 8));
        lVar4 = FUN_053f94f0(*(undefined8 *)(this + 0x28));
        p_Var5 = (_jobject *)AssetManagerJNI::Open(aAStack_18,(char *)(lVar4 + 0xb),&uStack_20);
        *(_jobject **)(this + 8) = p_Var5;
        lVar4 = AssetManagerJNI::Skip(aAStack_18,p_Var5,param_1);
        *(long *)(this + 0x18) = lVar4;
      }
      bVar1 = param_1 == lVar4;
      AutoJNIEnv::~AutoJNIEnv(aAStack_18);
    }
  }
  else {
    if (*(int *)(this + 0x20) != -1) {
      __whence = 1;
      if ((param_3 != 1) && (__whence = 2, param_3 != 2)) {
        __whence = 0;
      }
      bVar1 = true;
      _Var2 = lseek(*(int *)(this + 0x20),param_1,__whence);
      if (_Var2 == -1) {
        puVar3 = (undefined4 *)__errno();
        bVar1 = false;
        *(undefined4 *)(this + 0xcc) = *puVar3;
      }
      goto LAB_053fa258;
    }
LAB_053fa30c:
    bVar1 = false;
  }
LAB_053fa258:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::FileStream::GetSize() const */

void __thiscall EA::IO::FileStream::GetSize(FileStream *this)

{
  long lVar1;
  __off_t __offset;
  undefined4 *puVar2;
  undefined8 uVar3;
  AutoJNIEnv aAStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xd0) == 1) {
    if (*(long *)(this + 8) == 0) {
      lVar1 = -1;
    }
    else {
      lVar1 = *(long *)(this + 0x10);
      if (lVar1 == -1) {
        AutoJNIEnv::AutoJNIEnv(aAStack_18);
        lVar1 = FUN_053f94f0(*(undefined8 *)(this + 0x28));
        uVar3 = AssetManagerJNI::DetermineFileLengthBySkipping(aAStack_18,(char *)(lVar1 + 0xb));
        *(undefined8 *)(this + 0x10) = uVar3;
        AutoJNIEnv::~AutoJNIEnv(aAStack_18);
        lVar1 = *(long *)(this + 0x10);
      }
    }
  }
  else {
    lVar1 = -1;
    if (*(int *)(this + 0x20) != -1) {
      __offset = lseek(*(int *)(this + 0x20),0,1);
      if ((__offset < 0) || (lVar1 = lseek(*(int *)(this + 0x20),0,2), lVar1 < 0)) {
        puVar2 = (undefined4 *)__errno();
        lVar1 = -1;
        *(undefined4 *)(this + 0xcc) = *puVar2;
      }
      else {
        lseek(*(int *)(this + 0x20),__offset,0);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1);
}


/* EA::IO::FileStream::TEMPNAMEPLACEHOLDERVALUE(EA::IO::FileStream const&) */

FileStream * __thiscall EA::IO::FileStream::operator=(FileStream *this,FileStream *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x38))();
    uVar1 = FUN_053f94f0(*(undefined8 *)(param_1 + 0x28));
    (**(code **)(*(long *)this + 0x80))(this,uVar1);
    *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 0x20) = 0xffffffff;
    *(undefined4 *)(this + 0xbc) = 0;
    *(undefined4 *)(this + 0xc0) = 0;
    *(undefined4 *)(this + 0xc4) = 0;
    *(undefined4 *)(this + 0xcc) = 0xfffffffe;
  }
  return this;
}


/* EA::IO::FileStream::FileStream(char16_t const*) */

void __thiscall EA::IO::FileStream::FileStream(FileStream *this,wchar16 *param_1)

{
  IStream::IStream((IStream *)this);
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  *(undefined ***)this = &PTR__FileStream_06a37c80;
  Path::PathString8::PathString8((PathString8 *)(this + 0x28));
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 0xcc) = 0xfffffffe;
  SetPath(this,param_1);
  return;
}


/* EA::IO::FileStream::FileStream(char32_t const*) */

void __thiscall EA::IO::FileStream::FileStream(FileStream *this,wchar32 *param_1)

{
  IStream::IStream((IStream *)this);
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  *(undefined ***)this = &PTR__FileStream_06a37c80;
  Path::PathString8::PathString8((PathString8 *)(this + 0x28));
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 0xcc) = 0xfffffffe;
  SetPath(this,param_1);
  return;
}


/* EA::IO::FileStream::FileStream(wchar_t const*) */

void __thiscall EA::IO::FileStream::FileStream(FileStream *this,wchar_t *param_1)

{
  IStream::IStream((IStream *)this);
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  *(undefined ***)this = &PTR__FileStream_06a37c80;
  Path::PathString8::PathString8((PathString8 *)(this + 0x28));
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 0xcc) = 0xfffffffe;
  SetPath(this,param_1);
  return;
}


/* EA::IO::FileStream::~FileStream() */

void __thiscall EA::IO::FileStream::~FileStream(FileStream *this)

{
  *(undefined ***)this = &PTR__FileStream_06a37c80;
  Close(this);
  Path::PathString8::~PathString8((PathString8 *)(this + 0x28));
  return;
}


/* EA::IO::FileStream::~FileStream() */

void __thiscall EA::IO::FileStream::~FileStream(FileStream *this)

{
  ~FileStream(this);
  AK::FreeHook(this);
  return;
}


/* EA::IO::FileStream::SetPath(char const*) */

void __thiscall EA::IO::FileStream::SetPath(FileStream *this,char *param_1)

{
  if ((param_1 != (char *)0x0) && (*(int *)(this + 0x20) == -1)) {
    Path::PathString8::operator=((PathString8 *)(this + 0x28),param_1);
    return;
  }
  return;
}


/* EA::IO::FileStream::FileStream(char const*) */

void __thiscall EA::IO::FileStream::FileStream(FileStream *this,char *param_1)

{
  IStream::IStream((IStream *)this);
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__FileStream_06a37c80;
  Path::PathString8::PathString8((PathString8 *)(this + 0x28));
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 0xcc) = 0xfffffffe;
  SetPath(this,param_1);
  return;
}


/* EA::IO::FileStream::FileStream(EA::IO::FileStream const&) */

void __thiscall EA::IO::FileStream::FileStream(FileStream *this,FileStream *param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  
  IStream::IStream((IStream *)this);
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  *(undefined ***)this = &PTR__FileStream_06a37c80;
  Path::PathString8::PathString8((PathString8 *)(this + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(this + 0xcc) = 0xfffffffe;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  pcVar2 = (char *)FUN_053f94f0(uVar1);
  SetPath(this,pcVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::FileStream::Open(int, int, int, int) */

void __thiscall
EA::IO::FileStream::Open(FileStream *this,int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  char *__file;
  undefined4 *puVar4;
  uint __oflag;
  ulong local_20;
  AutoJNIEnv aAStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = eastl::
          basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
          ::find((basic_string<char,eastl::fixed_vector_allocator<1ul,96ul,1ul,0ul,true,EA::Allocator::EAIOPathStringCoreAllocator>>
                  *)(this + 0x28),"appbundle:/",0);
  if (lVar3 == 0) {
    *(undefined4 *)(this + 0xd0) = 1;
    if (param_1 == 1) {
      AutoJNIEnv::AutoJNIEnv(aAStack_18);
      lVar3 = FUN_053f94f0(*(undefined8 *)(this + 0x28));
      lVar3 = AssetManagerJNI::Open(aAStack_18,(char *)(lVar3 + 0xb),&local_20);
      *(undefined8 *)(this + 0x18) = 0;
      *(long *)(this + 8) = lVar3;
      *(ulong *)(this + 0x10) = local_20;
      if (lVar3 != 0) {
        *(undefined4 *)(this + 0xbc) = 1;
        *(int *)(this + 0xc0) = param_2;
        *(int *)(this + 0xc4) = param_3;
        *(int *)(this + 200) = param_4;
        *(undefined4 *)(this + 0xcc) = 0;
        AutoJNIEnv::~AutoJNIEnv(aAStack_18);
        bVar1 = true;
        goto LAB_053fafdc;
      }
      AutoJNIEnv::~AutoJNIEnv(aAStack_18);
    }
    bVar1 = false;
    *(undefined4 *)(this + 0xcc) = 0xffffffff;
    goto LAB_053fafdc;
  }
  *(undefined4 *)(this + 0xd0) = 0;
  iVar2 = *(int *)(this + 0x20);
  if ((param_1 != 0) && (iVar2 == -1)) {
    if (param_1 == 1) {
      if (param_2 != 6) {
        __oflag = 0;
        goto LAB_053faf70;
      }
      param_2 = 3;
      __oflag = 0;
      goto switchD_053faf90_caseD_3;
    }
    if (param_1 == 2) {
      __oflag = 1;
    }
    else {
      if (param_1 != 3) {
        __oflag = 0;
        if (param_2 != 6) goto LAB_053faf70;
        param_2 = 3;
        if (((uint)param_1 >> 1 & 1) != 0) {
          __oflag = 0x40;
          param_2 = 4;
        }
        goto switchD_053faf90_caseD_3;
      }
      __oflag = 2;
    }
    if (param_2 == 6) {
switchD_053faf90_caseD_4:
      __oflag = __oflag | 0x40;
      param_2 = 4;
    }
    else {
LAB_053faf70:
      switch(param_2) {
      case 1:
        __oflag = __oflag | 0xc0;
        break;
      case 2:
        __oflag = __oflag | 0x240;
        break;
      case 4:
        goto switchD_053faf90_caseD_4;
      case 5:
        __oflag = __oflag | 0x200;
      }
    }
switchD_053faf90_caseD_3:
    __file = (char *)FUN_053f94f0(*(undefined8 *)(this + 0x28));
    iVar2 = open(__file,__oflag,0x1b6);
    *(int *)(this + 0x20) = iVar2;
    if (iVar2 == -1) {
      puVar4 = (undefined4 *)__errno();
      *(undefined4 *)(this + 0xcc) = *puVar4;
    }
    else {
      *(int *)(this + 0xbc) = param_1;
      *(int *)(this + 0xc0) = param_2;
      *(int *)(this + 0xc4) = param_3;
      *(int *)(this + 200) = param_4;
      *(undefined4 *)(this + 0xcc) = 0;
    }
  }
  bVar1 = iVar2 != -1;
LAB_053fafdc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}

