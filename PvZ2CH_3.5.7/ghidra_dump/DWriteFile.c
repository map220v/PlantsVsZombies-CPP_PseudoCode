// Class: DWriteFile


/* DWriteFile::DWriteFile() */

void __thiscall DWriteFile::DWriteFile(DWriteFile *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  Set8BytesTo0(this + 0x10);
  return;
}


/* DWriteFile::close() */

DWriteFile * __thiscall DWriteFile::close(DWriteFile *this)

{
  uint uVar1;
  DWriteFile *pDVar2;
  
  pDVar2 = this;
  if (*(FILE **)this != (FILE *)0x0) {
    uVar1 = fclose(*(FILE **)this);
    pDVar2 = (DWriteFile *)(ulong)uVar1;
    *(undefined8 *)this = 0;
  }
  return pDVar2;
}


/* DWriteFile::~DWriteFile() */

void __thiscall DWriteFile::~DWriteFile(DWriteFile *this)

{
  close(this);
  std::string::~string((string *)(this + 0x10));
  return;
}


/* DWriteFile::writeString(std::string const&) */

size_t __thiscall DWriteFile::writeString(DWriteFile *this,string *param_1)

{
  void *__ptr;
  size_t sVar1;
  FILE *__s;
  
  __s = *(FILE **)this;
  if (__s != (FILE *)0x0) {
    __ptr = (void *)FUN_0547429c(param_1);
    sVar1 = FUN_05474178(param_1);
    sVar1 = fwrite(__ptr,1,sVar1,__s);
    *(size_t *)(this + 8) = *(long *)(this + 8) + sVar1;
    return sVar1;
  }
  return 0;
}


/* DWriteFile::writeBytes(void const*, unsigned long) */

size_t __thiscall DWriteFile::writeBytes(DWriteFile *this,void *param_1,ulong param_2)

{
  size_t sVar1;
  
  if (*(FILE **)this != (FILE *)0x0) {
    sVar1 = fwrite(param_1,1,param_2,*(FILE **)this);
    *(size_t *)(this + 8) = *(long *)(this + 8) + sVar1;
    return sVar1;
  }
  return 0;
}


/* DWriteFile::writeBytes(void const*, unsigned long, unsigned long) */

size_t __thiscall DWriteFile::writeBytes(DWriteFile *this,void *param_1,ulong param_2,ulong param_3)

{
  size_t sVar1;
  
  if (*(FILE **)this != (FILE *)0x0) {
    sVar1 = fwrite(param_1,param_2,param_3,*(FILE **)this);
    *(size_t *)(this + 8) = *(long *)(this + 8) + sVar1;
    return sVar1;
  }
  return 0;
}


/* DWriteFile::writeBytes(unsigned char) */

size_t __thiscall DWriteFile::writeBytes(DWriteFile *this,uchar param_1)

{
  size_t sVar1;
  uchar local_1;
  
  if (*(FILE **)this != (FILE *)0x0) {
    local_1 = param_1;
    sVar1 = fwrite(&local_1,1,1,*(FILE **)this);
    *(size_t *)(this + 8) = *(long *)(this + 8) + sVar1;
    return sVar1;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DWriteFile::init(char const*, bool, bool) */

void __thiscall DWriteFile::init(DWriteFile *this,char *param_1,bool param_2,bool param_3)

{
  char *__modes;
  ulong uVar1;
  long *plVar2;
  char cVar3;
  undefined8 uVar4;
  char *pcVar5;
  FILE *__stream;
  long lVar6;
  DStackAllocator *pDVar7;
  void *__dest;
  char *__s;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  plVar2 = Sexy::gFileDriver;
  local_8 = ___stack_chk_guard;
  (**(code **)(*Sexy::gFileDriver + 0x50))(asStack_18,Sexy::gFileDriver);
  std::operator+(asStack_18,"/");
  std::operator+(asStack_10,param_1);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  uVar4 = FUN_0547429c(asStack_20);
  Sexy::OutputDebugStrF((wchar_t *)&DAT_0569e3b8,uVar4);
  if (param_2) {
    __modes = "ab+";
  }
  else {
    __modes = "wb+";
  }
  if ((param_3) && (cVar3 = (**(code **)(*plVar2 + 0x110))(plVar2,asStack_20,0), cVar3 == '\0')) {
    pcVar5 = (char *)FUN_0547429c(asStack_20);
    cVar3 = *pcVar5;
    uVar1 = 1;
    while (cVar3 != '\0') {
      if ((cVar3 == '\\') || (cVar3 == '/')) {
        pDVar7 = (DStackAllocator *)DStackAllocator::getInstance();
        __dest = (void *)DStackAllocator::push(pDVar7,uVar1);
        __s = memcpy(__dest,pcVar5,uVar1 - 1);
        __s[uVar1 - 1] = '\0';
        std::string::string(asStack_10,__s);
        DFinder::createDirectory(asStack_10);
        std::string::~string(asStack_10);
        nop();
        pDVar7 = (DStackAllocator *)DStackAllocator::getInstance();
        DStackAllocator::pop(pDVar7);
      }
      cVar3 = pcVar5[uVar1];
      uVar1 = uVar1 + 1;
    }
  }
  thunk_FUN_05475e00(this + 0x10,asStack_20);
  pcVar5 = (char *)FUN_0547429c(asStack_20);
  __stream = fopen(pcVar5,__modes);
  *(FILE **)this = __stream;
  if (__stream != (FILE *)0x0) {
    fseek(__stream,0,2);
    lVar6 = ftell(*(FILE **)this);
    *(long *)(this + 8) = lVar6;
    fseek(*(FILE **)this,0,0);
  }
  std::string::~string(asStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(__stream != (FILE *)0x0);
  }
  return;
}

