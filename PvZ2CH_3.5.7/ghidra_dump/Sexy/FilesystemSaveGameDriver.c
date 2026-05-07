// Class: Sexy::FilesystemSaveGameDriver


/* Sexy::FilesystemSaveGameDriver::FilesystemSaveGameDriver() */

void __thiscall
Sexy::FilesystemSaveGameDriver::FilesystemSaveGameDriver(FilesystemSaveGameDriver *this)

{
  ISaveGameDriver::ISaveGameDriver((ISaveGameDriver *)this);
  *(undefined ***)this = &PTR_nop_06a35110;
  return;
}


/* Sexy::FilesystemSaveGameDriver::CreateSaveGameContext(Sexy::UserProfile*, std::string const&,
   unsigned long) */

FilesystemSaveGameContext *
Sexy::FilesystemSaveGameDriver::CreateSaveGameContext
          (UserProfile *param_1,string *param_2,ulong param_3)

{
  FilesystemSaveGameContext *this;
  
  this = ::operator_new(0x58);
  FilesystemSaveGameContext::FilesystemSaveGameContext
            (this,(UserProfile *)param_2,(string *)param_3);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::FilesystemSaveGameDriver::BeginSaveGameDelete(Sexy::ISaveGameContext*) */

void __thiscall
Sexy::FilesystemSaveGameDriver::BeginSaveGameDelete
          (FilesystemSaveGameDriver *this,ISaveGameContext *param_1)

{
  undefined4 uVar1;
  string *psVar2;
  char *pcVar3;
  long *plVar4;
  ulong uVar5;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  Sexy *local_8;
  
  local_8 = ___stack_chk_guard;
  GetAppDataFolder(___stack_chk_guard);
  std::operator+(asStack_18,"userdata/user%d/");
  if (*(code **)(*(long *)param_1 + 0x18) == FilesystemSaveGameContext::GetSaveName) {
    psVar2 = (string *)FilesystemSaveGameContext::GetSaveName((FilesystemSaveGameContext *)param_1);
  }
  else {
    psVar2 = (string *)(**(code **)(*(long *)param_1 + 0x18))();
  }
  std::operator+(asStack_10,psVar2);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  pcVar3 = (char *)FUN_0547429c(asStack_20);
  if (*(code **)(*(long *)param_1 + 0x10) == FilesystemSaveGameContext::GetPlayer) {
    plVar4 = (long *)FilesystemSaveGameContext::GetPlayer((FilesystemSaveGameContext *)param_1);
  }
  else {
    plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x10))();
  }
  uVar5 = (**(code **)(*plVar4 + 0x10))();
  StrFormat(pcVar3,asStack_10,uVar5 & 0xffffffff);
  FUN_05474278(asStack_20,asStack_10);
  std::string::~string(asStack_10);
  uVar1 = Deltree(asStack_20);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::FilesystemSaveGameDriver::BeginLoad(Sexy::ISaveGameContext*, std::string const&, bool) */

void Sexy::FilesystemSaveGameDriver::BeginLoad
               (ISaveGameContext *param_1,string *param_2,bool param_3)

{
  char cVar1;
  Sexy *this;
  string *psVar2;
  char *pcVar3;
  long *plVar4;
  ulong uVar5;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (Sexy *)thunk_FUN_05475e00(param_2 + 0x20,param_3);
  GetAppDataFolder(this);
  std::operator+(asStack_18,"userdata/user%d/");
  if (*(code **)(*(long *)param_2 + 0x18) == FilesystemSaveGameContext::GetSaveName) {
    psVar2 = (string *)FilesystemSaveGameContext::GetSaveName((FilesystemSaveGameContext *)param_2);
  }
  else {
    psVar2 = (string *)(**(code **)(*(long *)param_2 + 0x18))();
  }
  std::operator+(asStack_10,psVar2);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  pcVar3 = (char *)FUN_0547429c(asStack_20);
  if (*(code **)(*(long *)param_2 + 0x10) == FilesystemSaveGameContext::GetPlayer) {
    plVar4 = (long *)FilesystemSaveGameContext::GetPlayer((FilesystemSaveGameContext *)param_2);
  }
  else {
    plVar4 = (long *)(**(code **)(*(long *)param_2 + 0x10))();
  }
  uVar5 = (**(code **)(*plVar4 + 0x10))();
  StrFormat(pcVar3,asStack_10,uVar5 & 0xffffffff);
  FUN_05474278(asStack_20,asStack_10);
  std::string::~string(asStack_10);
  std::operator+(asStack_20,"/");
  std::operator+(asStack_10,param_2 + 0x20);
  std::string::~string(asStack_10);
  cVar1 = SexyAppBase::ReadBufferFromFile
                    (gSexyAppBase,(Buffer *)asStack_18,(bool)((char)param_2 + '('));
  if (cVar1 == '\0') {
    param_2[9] = (string)0x1;
  }
  else {
    param_2[8] = (string)0x1;
  }
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1 != '\0');
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::FilesystemSaveGameDriver::BeginSave(Sexy::ISaveGameContext*, std::string const&,
   Sexy::Buffer const&) */

void __thiscall
Sexy::FilesystemSaveGameDriver::BeginSave
          (FilesystemSaveGameDriver *this,ISaveGameContext *param_1,string *param_2,Buffer *param_3)

{
  char cVar1;
  Sexy *this_00;
  string *psVar2;
  char *pcVar3;
  long *plVar4;
  ulong uVar5;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Sexy *)thunk_FUN_05475e00((string *)(param_1 + 0x20),param_2);
  GetAppDataFolder(this_00);
  std::operator+(asStack_18,"userdata/user%d/");
  if (*(code **)(*(long *)param_1 + 0x18) == FilesystemSaveGameContext::GetSaveName) {
    psVar2 = (string *)FilesystemSaveGameContext::GetSaveName((FilesystemSaveGameContext *)param_1);
  }
  else {
    psVar2 = (string *)(**(code **)(*(long *)param_1 + 0x18))();
  }
  std::operator+(asStack_10,psVar2);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  pcVar3 = (char *)FUN_0547429c(asStack_20);
  if (*(code **)(*(long *)param_1 + 0x10) == FilesystemSaveGameContext::GetPlayer) {
    plVar4 = (long *)FilesystemSaveGameContext::GetPlayer((FilesystemSaveGameContext *)param_1);
  }
  else {
    plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x10))();
  }
  uVar5 = (**(code **)(*plVar4 + 0x10))();
  StrFormat(pcVar3,asStack_10,uVar5 & 0xffffffff);
  FUN_05474278(asStack_20,asStack_10);
  std::string::~string(asStack_10);
  std::operator+(asStack_20,"/");
  std::operator+(asStack_10,(string *)(param_1 + 0x20));
  std::string::~string(asStack_10);
  DFinder::createDirectory(asStack_20);
  psVar2 = gSexyAppBase;
  uVar5 = Buffer::GetDataPtr(param_3);
  Buffer::GetDataLen(param_3);
  cVar1 = SexyAppBase::WriteBytesToFile(psVar2,asStack_18,uVar5);
  if (cVar1 == '\0') {
    param_1[9] = (ISaveGameContext)0x1;
  }
  else {
    param_1[8] = (ISaveGameContext)0x1;
  }
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1 != '\0');
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::FilesystemSaveGameDriver::BeginDelete(Sexy::ISaveGameContext*, std::string const&) */

void __thiscall
Sexy::FilesystemSaveGameDriver::BeginDelete
          (FilesystemSaveGameDriver *this,ISaveGameContext *param_1,string *param_2)

{
  undefined4 uVar1;
  string *psVar2;
  char *pcVar3;
  long *plVar4;
  ulong uVar5;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  Sexy *local_8;
  
  local_8 = ___stack_chk_guard;
  GetAppDataFolder(___stack_chk_guard);
  std::operator+(asStack_18,"userdata/user%d/");
  if (*(code **)(*(long *)param_1 + 0x18) == FilesystemSaveGameContext::GetSaveName) {
    psVar2 = (string *)FilesystemSaveGameContext::GetSaveName((FilesystemSaveGameContext *)param_1);
  }
  else {
    psVar2 = (string *)(**(code **)(*(long *)param_1 + 0x18))();
  }
  std::operator+(asStack_10,psVar2);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  pcVar3 = (char *)FUN_0547429c(asStack_20);
  if (*(code **)(*(long *)param_1 + 0x10) == FilesystemSaveGameContext::GetPlayer) {
    plVar4 = (long *)FilesystemSaveGameContext::GetPlayer((FilesystemSaveGameContext *)param_1);
  }
  else {
    plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x10))();
  }
  uVar5 = (**(code **)(*plVar4 + 0x10))();
  StrFormat(pcVar3,asStack_10,uVar5 & 0xffffffff);
  FUN_05474278(asStack_20,asStack_10);
  std::string::~string(asStack_10);
  std::operator+(asStack_20,"/");
  std::operator+(asStack_10,param_2);
  std::string::~string(asStack_10);
  uVar1 = SexyAppBase::EraseFile(gSexyAppBase);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

