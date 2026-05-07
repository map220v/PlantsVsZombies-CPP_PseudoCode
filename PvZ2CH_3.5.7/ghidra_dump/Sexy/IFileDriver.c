// Class: Sexy::IFileDriver


/* Sexy::IFileDriver::SupportsMemoryMappedFiles() */

undefined8 Sexy::IFileDriver::SupportsMemoryMappedFiles(void)

{
  return 0;
}


/* Sexy::IFileDriver::CreateFileMemoryMapped(std::string const&) */

undefined8 Sexy::IFileDriver::CreateFileMemoryMapped(string *param_1)

{
  return 0;
}


/* Sexy::IFileDriver::MoveFile(std::string const&, std::string const&) */

undefined8 Sexy::IFileDriver::MoveFile(string *param_1,string *param_2)

{
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::IFileDriver::FileSearchStart(std::wstring const&, Sexy::FileSearchInfo*) */

void __thiscall
Sexy::IFileDriver::FileSearchStart(IFileDriver *this,wstring *param_1,FileSearchInfo *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x160);
  WStringToString((Sexy *)param_1,(wstring *)0x0,(bool *)param_2);
  uVar1 = (*pcVar2)(this,asStack_10,param_2);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::IFileDriver::MoveFile(std::wstring const&, std::wstring const&) */

void __thiscall Sexy::IFileDriver::MoveFile(IFileDriver *this,wstring *param_1,wstring *param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x150);
  WStringToString((Sexy *)param_1,(wstring *)0x0,(bool *)param_2);
  WStringToString((Sexy *)param_2,(wstring *)0x0,(bool *)param_2);
  if (pcVar2 == MoveFile) {
    uVar1 = MoveFile((string *)this,asStack_18);
  }
  else {
    uVar1 = (*pcVar2)(this,asStack_18,asStack_10);
  }
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::IFileDriver::DeleteFile(std::wstring const&) */

void __thiscall Sexy::IFileDriver::DeleteFile(IFileDriver *this,wstring *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  string asStack_10 [8];
  bool *local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x140);
  WStringToString((Sexy *)param_1,(wstring *)0x0,___stack_chk_guard);
  uVar1 = (*pcVar2)(this,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::IFileDriver::DeleteTree(std::wstring const&) */

void __thiscall Sexy::IFileDriver::DeleteTree(IFileDriver *this,wstring *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  string asStack_10 [8];
  bool *local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x130);
  WStringToString((Sexy *)param_1,(wstring *)0x0,___stack_chk_guard);
  uVar1 = (*pcVar2)(this,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::IFileDriver::MakeFolders(std::wstring const&) */

void __thiscall Sexy::IFileDriver::MakeFolders(IFileDriver *this,wstring *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  string asStack_10 [8];
  bool *local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x120);
  WStringToString((Sexy *)param_1,(wstring *)0x0,___stack_chk_guard);
  uVar1 = (*pcVar2)(this,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::IFileDriver::FileExists(std::wstring const&, bool*) */

void __thiscall Sexy::IFileDriver::FileExists(IFileDriver *this,wstring *param_1,bool *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x110);
  WStringToString((Sexy *)param_1,(wstring *)0x0,param_2);
  uVar1 = (*pcVar2)(this,asStack_10,param_2);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::IFileDriver::GetFileBirthTime(std::wstring const&) */

void __thiscall Sexy::IFileDriver::GetFileBirthTime(IFileDriver *this,wstring *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  string asStack_10 [8];
  bool *local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x100);
  WStringToString((Sexy *)param_1,(wstring *)0x0,___stack_chk_guard);
  uVar1 = (*pcVar2)(this,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::IFileDriver::GetFileTime(std::wstring const&) */

void __thiscall Sexy::IFileDriver::GetFileTime(IFileDriver *this,wstring *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  string asStack_10 [8];
  bool *local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0xf0);
  WStringToString((Sexy *)param_1,(wstring *)0x0,___stack_chk_guard);
  uVar1 = (*pcVar2)(this,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::IFileDriver::GetFileLastAccessTime(std::wstring const&) */

void __thiscall Sexy::IFileDriver::GetFileLastAccessTime(IFileDriver *this,wstring *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  string asStack_10 [8];
  bool *local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0xe0);
  WStringToString((Sexy *)param_1,(wstring *)0x0,___stack_chk_guard);
  uVar1 = (*pcVar2)(this,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::IFileDriver::GetFileSize(std::wstring const&) */

void __thiscall Sexy::IFileDriver::GetFileSize(IFileDriver *this,wstring *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  string asStack_10 [8];
  bool *local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0xd0);
  WStringToString((Sexy *)param_1,(wstring *)0x0,___stack_chk_guard);
  uVar1 = (*pcVar2)(this,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::IFileDriver::CreateFileMemoryMapped(std::wstring const&) */

void __thiscall Sexy::IFileDriver::CreateFileMemoryMapped(IFileDriver *this,wstring *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  string asStack_10 [8];
  bool *local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0xc0);
  WStringToString((Sexy *)param_1,(wstring *)0x0,___stack_chk_guard);
  if (pcVar2 == CreateFileMemoryMapped) {
    uVar1 = CreateFileMemoryMapped((string *)this);
  }
  else {
    uVar1 = (*pcVar2)(this,asStack_10);
  }
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::IFileDriver::CreateFileDirect(std::wstring const&) */

void __thiscall Sexy::IFileDriver::CreateFileDirect(IFileDriver *this,wstring *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  string asStack_10 [8];
  bool *local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0xa8);
  WStringToString((Sexy *)param_1,(wstring *)0x0,___stack_chk_guard);
  uVar1 = (*pcVar2)(this,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::IFileDriver::CreateFileWithBuffer(std::wstring const&, unsigned char*, unsigned int) */

void __thiscall
Sexy::IFileDriver::CreateFileWithBuffer
          (IFileDriver *this,wstring *param_1,uchar *param_2,uint param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x98);
  WStringToString((Sexy *)param_1,(wstring *)0x0,(bool *)param_2);
  uVar1 = (*pcVar2)(this,asStack_10,param_2,param_3);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::IFileDriver::CreateFile(std::wstring const&) */

void __thiscall Sexy::IFileDriver::CreateFile(IFileDriver *this,wstring *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  string asStack_10 [8];
  bool *local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x88);
  WStringToString((Sexy *)param_1,(wstring *)0x0,___stack_chk_guard);
  uVar1 = (*pcVar2)(this,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::IFileDriver::FixPath(std::wstring const&) */

void Sexy::IFileDriver::FixPath(wstring *param_1)

{
  Sexy *in_x1;
  string *extraout_x1;
  code *pcVar1;
  string asStack_18 [8];
  Sexy aSStack_10 [8];
  bool *local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)param_1 + 0x20);
  WStringToString(in_x1,(wstring *)0x0,___stack_chk_guard);
  (*pcVar1)(aSStack_10,param_1,asStack_18);
  StringToWString(aSStack_10,extraout_x1);
  std::string::~string((string *)aSStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::IFileDriver::IFileDriver() */

void __thiscall Sexy::IFileDriver::IFileDriver(IFileDriver *this)

{
  *(undefined **)this = &DAT_06a34830;
  return;
}


/* Sexy::IFileDriver::CreateFileDriver() */

AndroidAsyncIOFileDriver * Sexy::IFileDriver::CreateFileDriver(void)

{
  AndroidAsyncIOFileDriver *this;
  
  this = ::operator_new(200);
  AndroidAsyncIOFileDriver::AndroidAsyncIOFileDriver(this);
  return this;
}

