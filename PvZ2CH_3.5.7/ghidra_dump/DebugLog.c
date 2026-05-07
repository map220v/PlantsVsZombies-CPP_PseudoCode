// Class: DebugLog


/* DebugLog::~DebugLog() */

void __thiscall DebugLog::~DebugLog(DebugLog *this)

{
  *(undefined ***)this = &PTR__DebugLog_06a26ef0;
  std::string::~string((string *)(this + 0x10));
  Sexy::LazySingleton<DebugLog>::~LazySingleton((LazySingleton<DebugLog> *)this);
  return;
}


/* DebugLog::~DebugLog() */

void __thiscall DebugLog::~DebugLog(DebugLog *this)

{
  ~DebugLog(this);
  AK::FreeHook(this);
  return;
}


/* DebugLog::DebugLog() */

void __thiscall DebugLog::DebugLog(DebugLog *this)

{
  size_t in_x2;
  DebugLog *pDVar1;
  
  Sexy::LazySingleton<DebugLog>::LazySingleton((LazySingleton<DebugLog> *)this);
  *(undefined ***)this = &PTR__DebugLog_06a26ef0;
  Set8BytesTo0((string *)(this + 0x10));
  pDVar1 = this + 8;
  *(undefined4 *)pDVar1 = 0;
  std::string::append((string *)(this + 0x10),"",in_x2);
  SetFlag<DebugLogFlags>(pDVar1,1,1);
  SetFlag<DebugLogFlags>(pDVar1,2,1);
  SetFlag<DebugLogFlags>(pDVar1,4,1);
  SetFlag<DebugLogFlags>(pDVar1,8,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DebugLog::GetExternalFolder() */

void __thiscall DebugLog::GetExternalFolder(DebugLog *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Android::Resources::GetExternalFilesDirectory(gLawnApp);
  std::operator+(asStack_10,"Debug/");
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DebugLog::LogFile(std::string const&, std::string const&, std::string const&) */

void __thiscall DebugLog::LogFile(DebugLog *this,string *param_1,string *param_2,string *param_3)

{
  char cVar1;
  string asStack_28 [8];
  FileUtil aFStack_20 [8];
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetExternalFolder(this);
  FUN_031dcc6c(aFStack_20,asStack_28,param_1);
  (**(code **)(**(long **)(gLawnApp + 0x28) + 0x120))(*(long **)(gLawnApp + 0x28),asStack_28);
  FileUtil::openFile(aFStack_20,param_2,param_2);
  cVar1 = FUN_04fac920(local_18[0]);
  if (cVar1 != '\0') {
    FileUtil::writeFile((shared_ptr<__sFILE> *)local_18,param_3);
  }
  std::shared_ptr<__sFILE>::~shared_ptr((shared_ptr<__sFILE> *)local_18);
  std::string::~string((string *)aFStack_20);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DebugLog::ReadFile(std::string const&, std::string const&, std::string&) */

void __thiscall DebugLog::ReadFile(DebugLog *this,string *param_1,string *param_2,string *param_3)

{
  undefined4 uVar1;
  string asStack_28 [8];
  FileUtil aFStack_20 [8];
  shared_ptr<__sFILE> asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetExternalFolder(this);
  FUN_031dcc6c(aFStack_20,asStack_28,param_1);
  FileUtil::openFile(aFStack_20,param_2,param_2);
  uVar1 = FileUtil::readFile(asStack_18,param_3);
  std::shared_ptr<__sFILE>::~shared_ptr(asStack_18);
  std::string::~string((string *)aFStack_20);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

