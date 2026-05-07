// Class: Sexy::AndroidAsyncIOFile


/* Sexy::AndroidAsyncIOFile::GetSize() */

undefined4 __thiscall Sexy::AndroidAsyncIOFile::GetSize(AndroidAsyncIOFile *this)

{
  return *(undefined4 *)(this + 0x1c);
}


/* Sexy::AndroidAsyncIOFile::IsLoaded() */

AndroidAsyncIOFile __thiscall Sexy::AndroidAsyncIOFile::IsLoaded(AndroidAsyncIOFile *this)

{
  if ((this[0x20] == (AndroidAsyncIOFile)0x0) && (this[0x21] == (AndroidAsyncIOFile)0x0)) {
    (**(code **)(*(long *)this + 0x20))();
    return this[0x20];
  }
  return this[0x20];
}


/* Sexy::AndroidAsyncIOFile::HasError() */

AndroidAsyncIOFile __thiscall Sexy::AndroidAsyncIOFile::HasError(AndroidAsyncIOFile *this)

{
  if ((this[0x20] == (AndroidAsyncIOFile)0x0) && (this[0x21] == (AndroidAsyncIOFile)0x0)) {
    (**(code **)(*(long *)this + 0x20))();
    return this[0x21];
  }
  return this[0x20];
}


/* Sexy::AndroidAsyncIOFile::ForceLoad() */

byte __thiscall Sexy::AndroidAsyncIOFile::ForceLoad(AndroidAsyncIOFile *this)

{
  AndroidAsyncIOFile AVar1;
  
  if (this[0x20] == (AndroidAsyncIOFile)0x0) {
    while (AVar1 = this[0x21], AVar1 == (AndroidAsyncIOFile)0x0) {
      (**(code **)(*(long *)this + 0x20))(this);
      if (this[0x20] != (AndroidAsyncIOFile)0x0) {
        return (byte)this[0x21] ^ 1;
      }
    }
  }
  else {
    AVar1 = this[0x21];
  }
  return (byte)AVar1 ^ 1;
}


/* Sexy::AndroidAsyncIOFile::DirectSeek(unsigned long) */

void __thiscall Sexy::AndroidAsyncIOFile::DirectSeek(AndroidAsyncIOFile *this,ulong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(long *)this + 0x58))();
  if (iVar1 != 1) {
    *(int *)(this + 100) = (int)param_1;
  }
  return;
}


/* Sexy::AndroidAsyncIOFile::DirectReadBlockSize() */

undefined8 Sexy::AndroidAsyncIOFile::DirectReadBlockSize(void)

{
  return 0x800;
}


/* Sexy::AndroidAsyncIOFile::DirectRead(unsigned char*, unsigned long) */

undefined8 __thiscall
Sexy::AndroidAsyncIOFile::DirectRead(AndroidAsyncIOFile *this,uchar *param_1,ulong param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(long *)this + 0x58))();
  if (iVar1 != 1) {
    this[0x21] = (AndroidAsyncIOFile)0x0;
    *(int *)(this + 0x68) = (int)param_2;
    *(ulong *)(this + 0x38) = param_2;
    *(ulong *)(this + 0x40) = (ulong)(uint)(*(int *)(this + 100) + *(int *)(this + 0x70));
    *(uchar **)(this + 0x30) = param_1;
    *(undefined8 *)(this + 0x50) = *(undefined8 *)(this + 0x58);
    iVar1 = AndroidAIO::aio_read((aiocb *)(this + 0x28));
    if (iVar1 == 0) {
      *(int *)(this + 100) = *(int *)(this + 100) + (int)param_2;
      return 1;
    }
    this[0x21] = (AndroidAsyncIOFile)0x1;
  }
  return 0;
}


/* Sexy::AndroidAsyncIOFile::AsyncLoad() */

void __thiscall Sexy::AndroidAsyncIOFile::AsyncLoad(AndroidAsyncIOFile *this)

{
  if (((this[0x20] == (AndroidAsyncIOFile)0x0) && (this[0x21] == (AndroidAsyncIOFile)0x0)) &&
     (*(int *)(this + 0x48) != 0x73)) {
    if (*(int *)(this + 0x48) != 0) {
      this[0x21] = (AndroidAsyncIOFile)0x1;
      return;
    }
    this[0x20] = (AndroidAsyncIOFile)0x1;
    return;
  }
  return;
}


/* Sexy::AndroidAsyncIOFile::DirectReadStatus() */

undefined8 __thiscall Sexy::AndroidAsyncIOFile::DirectReadStatus(AndroidAsyncIOFile *this)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((*(int *)(this + 0x68) != 0) && (uVar1 = 2, this[0x21] == (AndroidAsyncIOFile)0x0)) {
    if (*(int *)(this + 0x48) == 0x73) {
      uVar1 = 1;
    }
    else if (*(int *)(this + 0x48) == 0) {
      *(undefined4 *)(this + 0x68) = 0;
      uVar1 = 0;
    }
    else {
      this[0x21] = (AndroidAsyncIOFile)0x1;
    }
  }
  return uVar1;
}


/* Sexy::AndroidAsyncIOFile::Close() */

void __thiscall Sexy::AndroidAsyncIOFile::Close(AndroidAsyncIOFile *this)

{
  if (*(int *)(this + 0x28) != -1) {
    close(*(int *)(this + 0x28));
    *(undefined4 *)(this + 0x28) = 0xffffffff;
  }
  return;
}


/* Sexy::AndroidAsyncIOFile::~AndroidAsyncIOFile() */

void __thiscall Sexy::AndroidAsyncIOFile::~AndroidAsyncIOFile(AndroidAsyncIOFile *this)

{
  *(undefined ***)this = &PTR__AndroidAsyncIOFile_06a349f0;
  if (this[8] != (AndroidAsyncIOFile)0x0) {
    free(*(void **)(this + 0x10));
  }
  Close(this);
  return;
}


/* Sexy::AndroidAsyncIOFile::~AndroidAsyncIOFile() */

void __thiscall Sexy::AndroidAsyncIOFile::~AndroidAsyncIOFile(AndroidAsyncIOFile *this)

{
  ~AndroidAsyncIOFile(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAsyncIOFile::InitRead(std::string const&, unsigned int) */

void __thiscall
Sexy::AndroidAsyncIOFile::InitRead(AndroidAsyncIOFile *this,string *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  code *pcVar5;
  AndroidAsyncIOFile AVar6;
  long local_20 [2];
  string asStack_10 [8];
  long local_8;
  
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  local_8 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x28) = 0xffffffff;
  *(uint *)(this + 0x1c) = param_2;
  local_20[0] = 0;
  local_20[1] = 0;
  Set8BytesTo0(asStack_10);
  cVar1 = Android::Resources::GetAssetFileInfo(param_1,asStack_10,local_20,local_20 + 1);
  if (cVar1 == '\0') {
LAB_052f3fc4:
    if (*(int *)(this + 0x28) == -1) goto LAB_052f407c;
  }
  else {
    *(int *)(this + 0x70) = (int)local_20[0];
    this[0x6c] = (AndroidAsyncIOFile)0x1;
    pcVar4 = (char *)FUN_0547429c(asStack_10);
    iVar2 = open(pcVar4,0);
    *(int *)(this + 0x28) = iVar2;
    if (iVar2 != -1) {
      lseek(iVar2,(ulong)*(uint *)(this + 0x70),0);
      goto LAB_052f3fc4;
    }
LAB_052f407c:
    pcVar4 = (char *)FUN_0547429c(param_1);
    iVar2 = open(pcVar4,0);
    *(int *)(this + 0x28) = iVar2;
    if (iVar2 == -1) {
      AVar6 = (AndroidAsyncIOFile)0x0;
      this[0x21] = (AndroidAsyncIOFile)0x1;
      goto LAB_052f400c;
    }
  }
  AVar6 = this[0x60];
  if (AVar6 == (AndroidAsyncIOFile)0x0) {
    AVar6 = (AndroidAsyncIOFile)0x1;
    *(undefined8 *)(this + 0x50) = *(undefined8 *)(this + 0x58);
    pcVar5 = *(code **)(*(long *)this + 0x30);
    *(ulong *)(this + 0x38) = (ulong)param_2;
    *(ulong *)(this + 0x40) = (ulong)*(uint *)(this + 0x70);
    uVar3 = (*pcVar5)(this);
    *(undefined8 *)(this + 0x30) = uVar3;
    AndroidAIO::aio_read((aiocb *)(this + 0x28));
  }
LAB_052f400c:
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(AVar6);
}


/* Sexy::AndroidAsyncIOFile::AndroidAsyncIOFile(std::string const&, unsigned int,
   Sexy::AndroidAsyncIOFileDriver*) */

void __thiscall
Sexy::AndroidAsyncIOFile::AndroidAsyncIOFile
          (AndroidAsyncIOFile *this,string *param_1,uint param_2,AndroidAsyncIOFileDriver *param_3)

{
  char cVar1;
  
  IFile::IFile((IFile *)this);
  this[8] = (AndroidAsyncIOFile)0x0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR__AndroidAsyncIOFile_06a349f0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  this[0x20] = (AndroidAsyncIOFile)0x0;
  this[0x21] = (AndroidAsyncIOFile)0x0;
  *(AndroidAsyncIOFileDriver **)(this + 0x58) = param_3;
  this[0x60] = (AndroidAsyncIOFile)0x1;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  this[0x6c] = (AndroidAsyncIOFile)0x0;
  *(undefined4 *)(this + 0x70) = 0;
  cVar1 = InitRead(this,param_1,param_2);
  if (cVar1 == '\0') {
    this[0x21] = (AndroidAsyncIOFile)0x1;
  }
  return;
}


/* Sexy::AndroidAsyncIOFile::AndroidAsyncIOFile(std::string const&, unsigned char*, unsigned int,
   bool, unsigned int, Sexy::AndroidAsyncIOFileDriver*) */

void __thiscall
Sexy::AndroidAsyncIOFile::AndroidAsyncIOFile
          (AndroidAsyncIOFile *this,string *param_1,uchar *param_2,uint param_3,bool param_4,
          uint param_5,AndroidAsyncIOFileDriver *param_6)

{
  char cVar1;
  
  IFile::IFile((IFile *)this);
  this[8] = (AndroidAsyncIOFile)param_4;
  *(uchar **)(this + 0x10) = param_2;
  *(undefined ***)this = &PTR__AndroidAsyncIOFile_06a349f0;
  *(uint *)(this + 0x18) = param_3;
  *(undefined4 *)(this + 0x1c) = 0;
  this[0x20] = (AndroidAsyncIOFile)0x0;
  this[0x21] = (AndroidAsyncIOFile)0x0;
  *(AndroidAsyncIOFileDriver **)(this + 0x58) = param_6;
  this[0x60] = (AndroidAsyncIOFile)0x0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  this[0x6c] = (AndroidAsyncIOFile)0x0;
  *(undefined4 *)(this + 0x70) = 0;
  cVar1 = InitRead(this,param_1,param_5);
  if (cVar1 == '\0') {
    this[0x21] = (AndroidAsyncIOFile)0x1;
  }
  return;
}

