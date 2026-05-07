// Class: Sexy::AndroidAsyncIOFileDriver


/* Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath() */

undefined8 Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath(void)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* Sexy::AndroidAsyncIOFileDriver::GetDataPathCacheData() */

undefined8 Sexy::AndroidAsyncIOFileDriver::GetDataPathCacheData(void)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* Sexy::AndroidAsyncIOFileDriver::GetLoadDataPath() */

undefined8 Sexy::AndroidAsyncIOFileDriver::GetLoadDataPath(void)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* Sexy::AndroidAsyncIOFileDriver::GetFileBirthTime(std::string const&) */

void Sexy::AndroidAsyncIOFileDriver::GetFileBirthTime(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0xf0))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAsyncIOFileDriver::FixPath(std::string const&) */

void Sexy::AndroidAsyncIOFileDriver::FixPath(string *param_1)

{
  char *__src;
  char *__dest;
  string *in_x8;
  char local_1008 [4096];
  long local_8;
  
  __dest = local_1008;
  local_8 = ___stack_chk_guard;
  __src = (char *)FUN_0547429c();
  strcpy(__dest,__src);
  while (local_1008[0] != '\0') {
    while (local_1008[0] != '\\') {
      __dest = __dest + 1;
      local_1008[0] = *__dest;
      if (local_1008[0] == '\0') goto LAB_052f2e14;
    }
    *__dest = '/';
    __dest = __dest + 1;
    local_1008[0] = *__dest;
  }
LAB_052f2e14:
  std::string::string(in_x8,local_1008);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAsyncIOFileDriver::GetDataPath(Sexy::IFileDriver::PathType) */

void Sexy::AndroidAsyncIOFileDriver::GetDataPath(string *param_1,long *param_2,undefined4 param_3)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  switch(param_3) {
  case 0:
    (**(code **)(*param_2 + 0x50))();
    break;
  case 1:
    (**(code **)(*param_2 + 0x58))();
    break;
  case 2:
    (**(code **)(*param_2 + 0x60))();
    break;
  case 3:
    (**(code **)(*param_2 + 0x68))();
    break;
  case 4:
    (**(code **)(*param_2 + 0x70))();
    break;
  default:
    std::string::string(param_1,"");
    nop();
  }
  if (lVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAsyncIOFileDriver::IsDataPathValid(std::string const&) */

void __thiscall
Sexy::AndroidAsyncIOFileDriver::IsDataPathValid(AndroidAsyncIOFileDriver *this,string *param_1)

{
  long lVar1;
  string *extraout_x1;
  string asStack_20 [8];
  Sexy aSStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x38))(aSStack_18);
  RemoveTrailingSlash(aSStack_18,extraout_x1);
  GetFileDir(asStack_10,true);
  std::string::~string(asStack_10);
  std::string::~string((string *)aSStack_18);
  lVar1 = FUN_05474368(param_1,asStack_20,0);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAsyncIOFileDriver::GetCurPath() */

void __thiscall Sexy::AndroidAsyncIOFileDriver::GetCurPath(AndroidAsyncIOFileDriver *this)

{
  string *in_x8;
  char acStack_1008 [4096];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getcwd(acStack_1008,0x1000);
  std::string::string(in_x8,acStack_1008);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAsyncIOFileDriver::GetFileLastAccessTime(std::string const&) */

void Sexy::AndroidAsyncIOFileDriver::GetFileLastAccessTime(string *param_1)

{
  int iVar1;
  char *__file;
  undefined8 uVar2;
  string asStack_90 [8];
  __time_t local_40;
  long local_8;
  
  uVar2 = 0;
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0x20))(asStack_90);
  __file = (char *)FUN_0547429c(asStack_90);
  iVar1 = stat(__file,(stat *)&stack0xffffffffffffff78);
  if (iVar1 == 0) {
    uVar2 = FUN_052f2bfc(local_40);
  }
  std::string::~string(asStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAsyncIOFileDriver::GetFileTime(std::string const&) */

void Sexy::AndroidAsyncIOFileDriver::GetFileTime(string *param_1)

{
  int iVar1;
  char *__file;
  undefined8 uVar2;
  string asStack_90 [8];
  __time_t local_30;
  long local_8;
  
  uVar2 = 0;
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0x20))(asStack_90);
  __file = (char *)FUN_0547429c(asStack_90);
  iVar1 = stat(__file,(stat *)&stack0xffffffffffffff78);
  if (iVar1 == 0) {
    uVar2 = FUN_052f2bfc(local_30);
  }
  std::string::~string(asStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAsyncIOFileDriver::MakeFolders(std::string const&) */

void Sexy::AndroidAsyncIOFileDriver::MakeFolders(string *param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  iVar3 = 0;
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0x20))(asStack_20);
  FUN_05475d88(asStack_18,asStack_20);
  while( true ) {
    iVar1 = FUN_054745c0(asStack_18,&DAT_056a1e20,(long)iVar3);
    if (iVar1 == -1) break;
    iVar3 = iVar1 + 1;
    FUN_05475ffc(asStack_10,asStack_18,0,(long)iVar1);
    pcVar2 = (char *)FUN_0547429c(asStack_10);
    mkdir(pcVar2,0x1fd);
    std::string::~string(asStack_10);
  }
  pcVar2 = (char *)FUN_0547429c(asStack_18);
  mkdir(pcVar2,0x1fd);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* Sexy::AndroidAsyncIOFileDriver::DeleteTree(std::string const&) */

void __thiscall
Sexy::AndroidAsyncIOFileDriver::DeleteTree(AndroidAsyncIOFileDriver *this,string *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_0547429c(param_1);
  EA::IO::Directory::Remove(pcVar1,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAsyncIOFileDriver::DeleteFile(std::string const&) */

void Sexy::AndroidAsyncIOFileDriver::DeleteFile(string *param_1)

{
  int iVar1;
  char *__name;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0x20))(asStack_10);
  __name = (char *)FUN_0547429c(asStack_10);
  iVar1 = unlink(__name);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 == 0);
}


/* Sexy::AndroidAsyncIOFileDriver::FileSearchEnd(Sexy::IFileSearch*) */

undefined8 __thiscall
Sexy::AndroidAsyncIOFileDriver::FileSearchEnd(AndroidAsyncIOFileDriver *this,IFileSearch *param_1)

{
  if (param_1 == (IFileSearch *)0x0) {
    return 0;
  }
  if (*(DIR **)(param_1 + 0x10) != (DIR *)0x0) {
    closedir(*(DIR **)(param_1 + 0x10));
    (**(code **)(*(long *)param_1 + 8))(param_1);
    return 1;
  }
  (**(code **)(*(long *)param_1 + 8))(param_1);
  return 0;
}


/* Sexy::AndroidAsyncIOFileDriver::GetVolumeStatistics(std::string const&, Sexy::VolumeStatistics*)
    */

bool __thiscall
Sexy::AndroidAsyncIOFileDriver::GetVolumeStatistics
          (AndroidAsyncIOFileDriver *this,string *param_1,VolumeStatistics *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = Android::Resources::GetFileSystemBlockCount(param_1);
  *(undefined8 *)param_2 = uVar1;
  uVar1 = Android::Resources::GetFileSystemBlocksFree(param_1);
  *(undefined8 *)(param_2 + 8) = uVar1;
  lVar2 = Android::Resources::GetFileSystemBlockSize(param_1);
  *(long *)(param_2 + 0x10) = lVar2;
  return lVar2 != 0 && *(long *)param_2 != 0;
}


/* Sexy::AndroidAsyncIOFileDriver::CreateFileWithBufferAndAttrData(std::string const&, unsigned
   char*, unsigned long, unsigned long, bool) */

AndroidAsyncIOFile * __thiscall
Sexy::AndroidAsyncIOFileDriver::CreateFileWithBufferAndAttrData
          (AndroidAsyncIOFileDriver *this,string *param_1,uchar *param_2,ulong param_3,ulong param_4
          ,bool param_5)

{
  AndroidAsyncIOFile *this_00;
  
  this_00 = ::operator_new(0x78);
  AndroidAsyncIOFile::AndroidAsyncIOFile
            (this_00,param_1,param_2,(uint)param_3,param_5,(uint)param_4,this);
  return this_00;
}


/* Sexy::AndroidAsyncIOFileDriver::IsAssetFilename(std::string const&) */

bool Sexy::AndroidAsyncIOFileDriver::IsAssetFilename(string *param_1)

{
  int iVar1;
  char *__s1;
  
  __s1 = (char *)FUN_0547429c();
  iVar1 = strncmp(__s1,sAssetPrefix,6);
  return iVar1 == 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAsyncIOFileDriver::CreateFile(std::string const&) */

void __thiscall
Sexy::AndroidAsyncIOFileDriver::CreateFile(AndroidAsyncIOFileDriver *this,string *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined8 uVar5;
  char *__file;
  size_t __size;
  string asStack_90 [8];
  int local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x20))(asStack_90);
  cVar1 = IsAssetFilename(param_1);
  if (cVar1 == '\0') {
    __file = (char *)FUN_0547429c(asStack_90);
    iVar3 = stat(__file,(stat *)&stack0xffffffffffffff78);
    iVar2 = local_58;
    if (iVar3 == 0) goto LAB_052f42ec;
  }
  else {
    iVar2 = Android::Resources::GetAssetFileSize(param_1);
LAB_052f42ec:
    if (iVar2 != -1) {
      __size = (size_t)((iVar2 + 0x800) - iVar2 % 0x800);
      pvVar4 = malloc(__size);
      if (pvVar4 != (void *)0x0) {
        uVar5 = (**(code **)(*(long *)this + 0x188))(this,asStack_90,pvVar4,__size,(long)iVar2,1);
        goto LAB_052f4348;
      }
    }
  }
  uVar5 = 0;
LAB_052f4348:
  std::string::~string(asStack_90);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAsyncIOFileDriver::CreateFileWithBuffer(std::string const&, unsigned char*, unsigned
   int) */

void __thiscall
Sexy::AndroidAsyncIOFileDriver::CreateFileWithBuffer
          (AndroidAsyncIOFileDriver *this,string *param_1,uchar *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char *__file;
  string asStack_90 [8];
  int local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x20))(asStack_90);
  cVar1 = IsAssetFilename(param_1);
  if (cVar1 == '\0') {
    __file = (char *)FUN_0547429c(asStack_90);
    iVar2 = stat(__file,(stat *)&stack0xffffffffffffff78);
    if (iVar2 == 0) goto LAB_052f4408;
  }
  else {
    local_58 = Android::Resources::GetAssetFileSize(param_1);
LAB_052f4408:
    if ((local_58 != -1) && ((uint)((local_58 + 0x800) - local_58 % 0x800) <= param_3)) {
      uVar3 = (**(code **)(*(long *)this + 0x188))(this,asStack_90,param_2,param_3,(long)local_58,0)
      ;
      goto LAB_052f445c;
    }
  }
  uVar3 = 0;
LAB_052f445c:
  std::string::~string(asStack_90);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAsyncIOFileDriver::GetFileSize(std::string const&) */

void __thiscall
Sexy::AndroidAsyncIOFileDriver::GetFileSize(AndroidAsyncIOFileDriver *this,string *param_1)

{
  char cVar1;
  int iVar2;
  char *__file;
  __off_t _Var3;
  string asStack_90 [8];
  __off_t local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x20))(asStack_90);
  cVar1 = IsAssetFilename(param_1);
  if (cVar1 == '\0') {
    __file = (char *)FUN_0547429c(asStack_90);
    iVar2 = stat(__file,(stat *)&stack0xffffffffffffff78);
    _Var3 = local_58;
    if (iVar2 != 0) {
      _Var3 = 0;
    }
  }
  else {
    _Var3 = Android::Resources::GetAssetFileSize(param_1);
  }
  std::string::~string(asStack_90);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(_Var3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAsyncIOFileDriver::FileExists(std::string const&, bool*) */

void __thiscall
Sexy::AndroidAsyncIOFileDriver::FileExists
          (AndroidAsyncIOFileDriver *this,string *param_1,bool *param_2)

{
  char cVar1;
  int iVar2;
  char *__file;
  string asStack_90 [8];
  uint local_78;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x20))(asStack_90);
  cVar1 = IsAssetFilename(param_1);
  if (cVar1 == '\0') {
    __file = (char *)FUN_0547429c(asStack_90);
    iVar2 = stat(__file,(stat *)&stack0xffffffffffffff78);
    if (iVar2 == 0) {
      if (param_2 != (bool *)0x0) {
        *param_2 = (local_78 & 0xf000) == 0x4000;
      }
      cVar1 = '\x01';
    }
  }
  else {
    iVar2 = Android::Resources::GetAssetFileSize(param_1);
    if (iVar2 < 0) {
      cVar1 = '\0';
    }
    else if (param_2 != (bool *)0x0) {
      *param_2 = false;
    }
  }
  std::string::~string(asStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAsyncIOFileDriver::CreateFileDirect(std::string const&) */

void __thiscall
Sexy::AndroidAsyncIOFileDriver::CreateFileDirect(AndroidAsyncIOFileDriver *this,string *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  AndroidAsyncIOFile *this_00;
  char *__file;
  string asStack_90 [8];
  int local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x20))(asStack_90);
  cVar1 = IsAssetFilename(param_1);
  if (cVar1 == '\0') {
    __file = (char *)FUN_0547429c(asStack_90);
    iVar3 = stat(__file,(stat *)&stack0xffffffffffffff78);
    if (iVar3 == 0) goto LAB_052f4690;
  }
  else {
    local_58 = Android::Resources::GetAssetFileSize(param_1);
LAB_052f4690:
    if (local_58 != -1) {
      uVar2 = (**(code **)(*(long *)this + 0xd0))(this,param_1);
      this_00 = ::operator_new(0x78);
      AndroidAsyncIOFile::AndroidAsyncIOFile(this_00,asStack_90,uVar2,this);
      goto LAB_052f46cc;
    }
  }
  this_00 = (AndroidAsyncIOFile *)0x0;
LAB_052f46cc:
  std::string::~string(asStack_90);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this_00);
  }
  return;
}


/* Sexy::AndroidAsyncIOFileDriver::CreateIOThread() */

void __thiscall Sexy::AndroidAsyncIOFileDriver::CreateIOThread(AndroidAsyncIOFileDriver *this)

{
  std::atomic_bool::store(this + 0xb4,0,5);
  std::atomic_bool::store(this + 0xb5,1,5);
  LaunchThread(StaticAsyncIOThreadMain,this,1);
  return;
}


/* Sexy::AndroidAsyncIOFileDriver::DestroyIOThread() */

void __thiscall Sexy::AndroidAsyncIOFileDriver::DestroyIOThread(AndroidAsyncIOFileDriver *this)

{
  char cVar1;
  uint uVar2;
  
  std::atomic_bool::store(this + 0xb4,1,5);
  cVar1 = std::atomic_bool::load(this + 0xb5,5);
  if (cVar1 != '\0') {
    while( true ) {
      uVar2 = std::atomic_bool::load(this + 0xb4,5);
      if ((uVar2 & 0xff) == 0) break;
      SexySleep((Sexy *)0x64,uVar2 & 0xff);
    }
  }
  return;
}


/* Sexy::AndroidAsyncIOFileDriver::GetDataPathSupportDataNoBackup() */

void Sexy::AndroidAsyncIOFileDriver::GetDataPathSupportDataNoBackup(void)

{
  long in_x0;
  
  std::operator+((string *)(in_x0 + 0x28),"No_Backup/");
  return;
}


/* Sexy::AndroidAsyncIOFileDriver::GetDataPathSupportDataBackup() */

void Sexy::AndroidAsyncIOFileDriver::GetDataPathSupportDataBackup(void)

{
  long in_x0;
  
  std::operator+((string *)(in_x0 + 0x28),"Backup/");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAsyncIOFileDriver::FileSearchNext(Sexy::IFileSearch*, Sexy::FileSearchInfo*) */

void __thiscall
Sexy::AndroidAsyncIOFileDriver::FileSearchNext
          (AndroidAsyncIOFileDriver *this,IFileSearch *param_1,FileSearchInfo *param_2)

{
  char *__name;
  FileSearchInfo FVar1;
  int iVar2;
  dirent *pdVar3;
  char *pcVar4;
  undefined8 uVar5;
  string asStack_90 [8];
  uint local_78;
  __off_t local_58;
  __time_t local_40;
  __time_t local_30;
  __time_t local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (IFileSearch *)0x0) && (*(DIR **)(param_1 + 0x10) != (DIR *)0x0)) {
    pdVar3 = readdir(*(DIR **)(param_1 + 0x10));
    while (pdVar3 != (dirent *)0x0) {
      __name = pdVar3->d_name;
      pcVar4 = (char *)FUN_0547429c(param_1 + 0x20);
      iVar2 = fnmatch(pcVar4,__name,0);
      if (iVar2 == 0) {
        std::operator+((string *)(param_1 + 0x18),__name);
        pcVar4 = (char *)FUN_0547429c(asStack_90);
        iVar2 = stat(pcVar4,(stat *)&stack0xffffffffffffff78);
        std::string::~string(asStack_90);
        if (iVar2 == 0) {
          uVar5 = FUN_052f2bfc(local_20);
          *(undefined8 *)(param_2 + 0x10) = uVar5;
          uVar5 = FUN_052f2bfc(local_40);
          *(undefined8 *)(param_2 + 0x20) = uVar5;
          uVar5 = FUN_052f2bfc(local_30);
          *(undefined8 *)(param_2 + 0x18) = uVar5;
          *(__off_t *)(param_2 + 0x30) = local_58;
          FVar1 = (FileSearchInfo)((local_78 & 0xf000) == 0x4000);
          param_2[8] = FVar1;
          std::string::append((string *)param_2,__name,(ulong)(byte)FVar1);
          uVar5 = 1;
          goto LAB_052f48c0;
        }
      }
      pdVar3 = readdir(*(DIR **)(param_1 + 0x10));
    }
  }
  uVar5 = 0;
LAB_052f48c0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAsyncIOFileDriver::FileSearchStart(std::string const&, Sexy::FileSearchInfo*) */

void __thiscall
Sexy::AndroidAsyncIOFileDriver::FileSearchStart
          (AndroidAsyncIOFileDriver *this,string *param_1,FileSearchInfo *param_2)

{
  bool bVar1;
  char cVar2;
  char *__name;
  DIR *__dirp;
  AndroidFileSearch *this_00;
  FileSearchInfo *__n;
  code *pcVar3;
  AndroidFileSearch *pAVar4;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = param_2;
  FUN_05475d88(asStack_20);
  pcVar3 = *(code **)(*(long *)this + 0x20);
  GetFileDir(asStack_20,true);
  (*pcVar3)(asStack_18,this,asStack_10);
  std::string::~string(asStack_10);
  GetFileName(asStack_20,false);
  FUN_05474278(asStack_20,asStack_10);
  std::string::~string(asStack_10);
  bVar1 = std::operator==(asStack_20,"*.*");
  if ((bVar1) || (bVar1 = std::operator==(asStack_20,""), bVar1)) {
    std::string::append(asStack_20,"*",(size_t)__n);
  }
  __name = (char *)FUN_0547429c(asStack_18);
  __dirp = opendir(__name);
  if (__dirp == (DIR *)0x0) {
    pAVar4 = (AndroidFileSearch *)0x0;
  }
  else {
    this_00 = ::operator_new(0x28);
    AndroidFileSearch::AndroidFileSearch(this_00,asStack_20,asStack_18,__dirp);
    cVar2 = (**(code **)(*(long *)this + 0x170))(this,this_00,param_2);
    pAVar4 = this_00;
    if (cVar2 == '\0') {
      pAVar4 = (AndroidFileSearch *)0x0;
      (**(code **)(*(long *)this_00 + 8))(this_00);
      closedir(__dirp);
    }
  }
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pAVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAsyncIOFileDriver::InitFileDriver(Sexy::SexyAppBase*) */

void __thiscall
Sexy::AndroidAsyncIOFileDriver::InitFileDriver(AndroidAsyncIOFileDriver *this,SexyAppBase *param_1)

{
  AndroidAsyncIOFileDriver *pAVar1;
  char *pcVar2;
  string asStack_10 [8];
  size_t local_8;
  
  pAVar1 = this + 0x10;
  *(SexyAppBase **)(this + 8) = param_1;
  local_8 = ___stack_chk_guard;
  std::string::append((string *)(this + 0x18),sAssetPrefix,___stack_chk_guard);
  Android::Resources::GetUserDataFolder(*(AndroidAppDriver **)(*(long *)(this + 8) + 0x10));
  FUN_05474278(pAVar1,asStack_10);
  std::string::~string(asStack_10);
  FUN_05474fb0(asStack_10,pAVar1);
  pcVar2 = (char *)std::reverse_iterator<__gnu_cxx::__normal_iterator<char*,std::string>>::operator*
                             ((reverse_iterator<__gnu_cxx::__normal_iterator<char*,std::string>> *)
                              asStack_10);
  if (*pcVar2 != '/') {
    FUN_05475c50(pAVar1,0x2f);
  }
  pAVar1 = this + 0x20;
  Android::Resources::GetCacheDataFolder(*(AndroidAppDriver **)(*(long *)(this + 8) + 0x10));
  FUN_05474278(pAVar1,asStack_10);
  std::string::~string(asStack_10);
  FUN_05474fb0(asStack_10,pAVar1);
  pcVar2 = (char *)std::reverse_iterator<__gnu_cxx::__normal_iterator<char*,std::string>>::operator*
                             ((reverse_iterator<__gnu_cxx::__normal_iterator<char*,std::string>> *)
                              asStack_10);
  if (*pcVar2 != '/') {
    FUN_05475c50(pAVar1,0x2f);
  }
  pAVar1 = this + 0x28;
  Android::Resources::GetAppSupportDataFolder(*(AndroidAppDriver **)(*(long *)(this + 8) + 0x10));
  FUN_05474278(pAVar1,asStack_10);
  std::string::~string(asStack_10);
  FUN_05474fb0(asStack_10,pAVar1);
  pcVar2 = (char *)std::reverse_iterator<__gnu_cxx::__normal_iterator<char*,std::string>>::operator*
                             ((reverse_iterator<__gnu_cxx::__normal_iterator<char*,std::string>> *)
                              asStack_10);
  if (*pcVar2 != '/') {
    FUN_05475c50(pAVar1,0x2f);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* Sexy::AndroidAsyncIOFileDriver::AndroidAsyncIOFileDriver() */

void __thiscall
Sexy::AndroidAsyncIOFileDriver::AndroidAsyncIOFileDriver(AndroidAsyncIOFileDriver *this)

{
  size_t __n;
  
  IFileDriver::IFileDriver((IFileDriver *)this);
  *(undefined ***)this = &PTR__AndroidAsyncIOFileDriver_06a34a70;
  Set8BytesTo0((string *)(this + 0x10));
  Set8BytesTo0((string *)(this + 0x18));
  Set8BytesTo0((string *)(this + 0x20));
  Set8BytesTo0((string *)(this + 0x28));
  CritSect::CritSect((CritSect *)(this + 0x30));
  Condition::Condition((Condition *)(this + 0x58));
  std::list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>>::list
            ((list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>> *)(this + 0xb8));
  std::atomic_bool::store(this + 0xb5,0,5);
  __n = 5;
  std::atomic_bool::store(this + 0xb4,0);
  *(undefined8 *)(this + 8) = 0;
  std::string::append((string *)(this + 0x18),"",__n);
  std::string::append((string *)(this + 0x10),"",__n);
  std::string::append((string *)(this + 0x20),"",__n);
  std::string::append((string *)(this + 0x28),"",__n);
  CreateIOThread(this);
  return;
}


/* Sexy::AndroidAsyncIOFileDriver::~AndroidAsyncIOFileDriver() */

void __thiscall
Sexy::AndroidAsyncIOFileDriver::~AndroidAsyncIOFileDriver(AndroidAsyncIOFileDriver *this)

{
  *(undefined ***)this = &PTR__AndroidAsyncIOFileDriver_06a34a70;
  DestroyIOThread(this);
  std::list<AndroidAIO::aiocb*,std::allocator<AndroidAIO::aiocb*>>::~list
            ((list<AndroidAIO::aiocb*,std::allocator<AndroidAIO::aiocb*>> *)(this + 0xb8));
  Condition::~Condition((Condition *)(this + 0x58));
  EA::Thread::Mutex::~Mutex((Mutex *)(this + 0x30));
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  return;
}


/* Sexy::AndroidAsyncIOFileDriver::~AndroidAsyncIOFileDriver() */

void __thiscall
Sexy::AndroidAsyncIOFileDriver::~AndroidAsyncIOFileDriver(AndroidAsyncIOFileDriver *this)

{
  ~AndroidAsyncIOFileDriver(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAsyncIOFileDriver::GetAsyncReadJob() */

void __thiscall Sexy::AndroidAsyncIOFileDriver::GetAsyncReadJob(AndroidAsyncIOFileDriver *this)

{
  list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>> *this_00;
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  AutoCrit aAStack_10 [8];
  long local_8;
  
  this_00 = (list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>> *)(this + 0xb8);
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_10,(CritSect *)(this + 0x30));
  cVar1 = std::list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>>::empty(this_00);
  if (cVar1 == '\0') {
    puVar2 = (undefined8 *)
             std::list<AndroidAIO::aiocb*,std::allocator<AndroidAIO::aiocb*>>::front
                       ((list<AndroidAIO::aiocb*,std::allocator<AndroidAIO::aiocb*>> *)this_00);
    uVar3 = *puVar2;
    std::list<AndroidAIO::aiocb*,std::allocator<AndroidAIO::aiocb*>>::pop_front
              ((list<AndroidAIO::aiocb*,std::allocator<AndroidAIO::aiocb*>> *)this_00);
  }
  else {
    uVar3 = 0;
  }
  AutoCrit::~AutoCrit(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* Sexy::AndroidAsyncIOFileDriver::AsyncIOThreadMain() */

void __thiscall Sexy::AndroidAsyncIOFileDriver::AsyncIOThreadMain(AndroidAsyncIOFileDriver *this)

{
  AndroidAsyncIOFileDriver *pAVar1;
  char cVar2;
  int *piVar3;
  __off_t _Var4;
  
  pAVar1 = this + 0xb4;
  std::atomic_bool::store(this + 0xb5,1,5);
  do {
    cVar2 = std::atomic_bool::load(pAVar1,5);
    while( true ) {
      if (cVar2 != '\0') {
        std::atomic_bool::store(pAVar1,0,5);
        return;
      }
      piVar3 = (int *)GetAsyncReadJob(this);
      if (piVar3 == (int *)0x0) break;
      _Var4 = lseek(*piVar3,*(__off_t *)(piVar3 + 6),0);
      if ((-1 < _Var4) &&
         (_Var4 = read(*piVar3,*(void **)(piVar3 + 2),*(size_t *)(piVar3 + 4)),
         _Var4 != *(long *)(piVar3 + 4))) {
        __errno();
      }
      piVar3[9] = (int)_Var4;
      piVar3[8] = 0;
      cVar2 = std::atomic_bool::load(pAVar1,5);
    }
    Condition::Wait((Condition *)(this + 0x58),100);
  } while( true );
}


/* Sexy::AndroidAsyncIOFileDriver::StaticAsyncIOThreadMain(void*) */

void Sexy::AndroidAsyncIOFileDriver::StaticAsyncIOThreadMain(void *param_1)

{
  long lVar1;
  char cVar2;
  int *piVar3;
  __off_t _Var4;
  
  lVar1 = (long)param_1 + 0xb4;
  std::atomic_bool::store((long)param_1 + 0xb5,1,5);
  do {
    cVar2 = std::atomic_bool::load(lVar1,5);
    while( true ) {
      if (cVar2 != '\0') {
        std::atomic_bool::store(lVar1,0,5);
        return;
      }
      piVar3 = (int *)GetAsyncReadJob(param_1);
      if (piVar3 == (int *)0x0) break;
      _Var4 = lseek(*piVar3,*(__off_t *)(piVar3 + 6),0);
      if ((-1 < _Var4) &&
         (_Var4 = read(*piVar3,*(void **)(piVar3 + 2),*(size_t *)(piVar3 + 4)),
         _Var4 != *(long *)(piVar3 + 4))) {
        __errno();
      }
      piVar3[9] = (int)_Var4;
      piVar3[8] = 0;
      cVar2 = std::atomic_bool::load(lVar1,5);
    }
    Condition::Wait((Condition *)((long)param_1 + 0x58),100);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAsyncIOFileDriver::SubmitAsyncRead(AndroidAIO::aiocb*) */

void __thiscall
Sexy::AndroidAsyncIOFileDriver::SubmitAsyncRead(AndroidAsyncIOFileDriver *this,aiocb *param_1)

{
  aiocb *local_18;
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  AutoCrit::AutoCrit(aAStack_10,(CritSect *)(this + 0x30));
  std::list<AndroidAIO::aiocb*,std::allocator<AndroidAIO::aiocb*>>::push_back
            ((list<AndroidAIO::aiocb*,std::allocator<AndroidAIO::aiocb*>> *)(this + 0xb8),&local_18)
  ;
  Condition::Notify((Condition *)(this + 0x58));
  AutoCrit::~AutoCrit(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}

