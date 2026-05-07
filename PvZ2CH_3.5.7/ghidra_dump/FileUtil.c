// Class: FileUtil


/* FileUtil::writeFile(std::shared_ptr<__sFILE> const&, std::string const&) */

void FileUtil::writeFile(shared_ptr *param_1,string *param_2)

{
  char cVar1;
  void *__ptr;
  size_t __n;
  FILE *__s;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)param_1;
  cVar1 = FUN_04fac4b4(uVar2);
  if (cVar1 == '\0') {
    return;
  }
  __ptr = (void *)FUN_0547429c(param_2);
  __n = FUN_05474178(param_2);
  __s = (FILE *)FUN_04fac4c0(uVar2);
  fwrite(__ptr,1,__n,__s);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FileUtil::readFile(std::shared_ptr<__sFILE> const&, std::string&) */

void FileUtil::readFile(shared_ptr *param_1,string *param_2)

{
  char cVar1;
  FILE *pFVar2;
  ulong __n;
  ColourFit *this;
  undefined8 uVar3;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  uVar3 = *(undefined8 *)param_1;
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_04fac4b4(uVar3);
  if (cVar1 != '\0') {
    pFVar2 = (FILE *)FUN_04fac4c0(uVar3);
    fseek(pFVar2,0,2);
    pFVar2 = (FILE *)FUN_04fac4c0(*(undefined8 *)param_1);
    __n = ftell(pFVar2);
    pFVar2 = (FILE *)FUN_04fac4c0(*(undefined8 *)param_1);
    fseek(pFVar2,0,0);
    this = operator_new__(__n);
    pFVar2 = (FILE *)FUN_04fac4c0(*(undefined8 *)param_1);
    fread(this,1,__n,pFVar2);
    FUN_05476128(asStack_10,this,__n,auStack_18);
    FUN_05474278(param_2,asStack_10);
    std::string::~string(asStack_10);
    nop();
    EATextSquish::ColourFit::~ColourFit(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FileUtil::getTimeStr() */

void __thiscall FileUtil::getTimeStr(FileUtil *this)

{
  char *__s;
  string *in_x8;
  time_t local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_10 = time((time_t *)0x0);
  __s = ctime(&local_10);
  std::string::string(in_x8,__s);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FileUtil::openFile(std::string const&, std::string const&) */

void __thiscall FileUtil::openFile(FileUtil *this,string *param_1,string *param_2)

{
  char *__filename;
  char *__modes;
  
  __filename = (char *)FUN_0547429c();
  __modes = (char *)FUN_0547429c(param_1);
  fopen(__filename,__modes);
  thunk_FUN_04fac828();
  return;
}

